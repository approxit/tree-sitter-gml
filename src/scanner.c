#include "tree_sitter/parser.h"
#include "tree_sitter/alloc.h"
#include "tree_sitter/array.h"

#include <wctype.h>

#define DISABLE_PRINTF

#ifdef __EMSCRIPTEN__
    #define DISABLE_PRINTF
#endif

#ifndef DISABLE_PRINTF
    #include <stdio.h>
    #define PRINTF(...) printf(__VA_ARGS__)
    #define PRINT_CHAR(...) print_char(__VA_ARGS__)
#else
    #define PRINTF(...)
    #define PRINT_CHAR(...)
#endif

enum TokenType {
    LINE_START,
    LINE_END,
    INDENT,
    CURRENT,
    DEDENT,
    ERROR
};

typedef struct {
    uint16_t last_indent;
    bool has_seen_eof;
} Scanner;

#ifndef DISABLE_PRINTF
void print_char(int32_t c) {
    switch (c) {
        case '\n':
            PRINTF("<newline>");
            break;
        case '\t':
            PRINTF("<tab>");
            break;
        case 0:
            PRINTF("<eof>");
            break;
        case ' ':
            PRINTF("<space>");
            break;
        default:
            PRINTF("%c", c);
    }
}
#endif

static inline void advance(TSLexer *lexer) {
    lexer->advance(lexer, false);

    PRINTF("[gml] \tadvance char=");
    PRINT_CHAR(lexer->lookahead);
    PRINTF("\n");
}

static inline void skip(TSLexer *lexer) {
    lexer->advance(lexer, true);

    PRINTF("[gml] \tskip char=");
    PRINT_CHAR(lexer->lookahead);
    PRINTF("\n");
}

static inline void mark_end(TSLexer *lexer) {
    lexer->mark_end(lexer);

    PRINTF("[gml] \tmark_end\n");
}

static bool handle_eof(Scanner *scanner, TSLexer *lexer, const bool *valid_symbols) {
    PRINTF("[gml] \tmode: EOF\n");

    mark_end(lexer);

    if (valid_symbols[DEDENT] && (0 < scanner->last_indent)) {
        scanner->last_indent -= 1;
        lexer->result_symbol = DEDENT;

        PRINTF("[gml] end (eof): dedent %d\n", scanner->last_indent);

        return true;
    }

//    if (valid_symbols[LINE_START]) {
//        lexer->result_symbol = LINE_START;
//
//        PRINTF("[gml] end (eof): line start\n");
//
//        return true;
//    }

    if (valid_symbols[LINE_END] && !scanner->has_seen_eof) {
        lexer->result_symbol = LINE_END;
        scanner->has_seen_eof = true;

        PRINTF("[gml] end (eof): line end\n");

        return true;
    }

    PRINTF("[gml] end (eof)\n");

    return false;
}

void * tree_sitter_gml_external_scanner_create() {
//    PRINTF("[gml] tree_sitter_gml_external_scanner_create\n");

    Scanner *scanner = ts_malloc(sizeof(Scanner));
    scanner->last_indent = 0;
    scanner->has_seen_eof = false;
    return scanner;
}

void tree_sitter_gml_external_scanner_destroy(void *payload) {
//    PRINTF("[gml] tree_sitter_gml_external_scanner_destroy\n");

    Scanner *scanner = (Scanner *) payload;
    ts_free(scanner);
}

unsigned tree_sitter_gml_external_scanner_serialize(void *payload, char *buffer) {
    Scanner *scanner = (Scanner *) payload;

    size_t size = 0;

    buffer[size++] = (char)(scanner->last_indent & 0xFF);
    buffer[size++] = (char)((scanner->last_indent >> 8) & 0xFF);
    buffer[size++] = (char)(scanner->has_seen_eof ? 1 : 0);

//    PRINTF("[gml] tree_sitter_gml_external_scanner_serialize: %d\n", size);

    return size;
}

void tree_sitter_gml_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
//    PRINTF("[gml] tree_sitter_gml_external_scanner_deserialize: %d\n", length);

    Scanner *scanner = (Scanner *) payload;

    if (length == 0) {
        scanner->last_indent = 0;
        scanner->has_seen_eof = false;
        return;
    }

    scanner->last_indent = (uint16_t)buffer[0] | ((uint16_t)buffer[1] << 8);
    scanner->has_seen_eof = buffer[2] != 0;
}

bool tree_sitter_gml_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
//    PRINTF("[gml] tree_sitter_gml_external_scanner_scan\n");

    Scanner *scanner = (Scanner *) payload;

    PRINTF("[gml] start: char=");
    PRINT_CHAR(lexer->lookahead);
    PRINTF(" column=%d\n", lexer->get_column(lexer));

    PRINTF("[gml] \tvalid_symbols: LINE_START=%d LINE_END=%d INDENT=%d CURRENT=%d DEDENT=%d ERROR=%d\n", valid_symbols[LINE_START], valid_symbols[LINE_END], valid_symbols[INDENT], valid_symbols[CURRENT], valid_symbols[DEDENT], valid_symbols[ERROR]);

    if (valid_symbols[ERROR]) {
        PRINTF("[gml] \tmode: ERROR\n");

        PRINTF("[gml] end: ERROR\n");

        return false;
    }

    if (lexer->eof(lexer)) {
        return handle_eof(scanner, lexer, valid_symbols);
    }

    if (valid_symbols[LINE_END]) {
        PRINTF("[gml] \tmode: LINE_END\n");

        while (!lexer->eof(lexer) && iswspace(lexer->lookahead)) {
            if (lexer->lookahead == '\n') {
                skip(lexer);
                lexer->result_symbol = LINE_END;

                PRINTF("[gml] end: line end\n");

                return true;
            }

            skip(lexer);
        }

        if (lexer->eof(lexer)) {
            scanner->has_seen_eof = true;
            return handle_eof(scanner, lexer, valid_symbols);
        }
    }

    if (valid_symbols[INDENT] || valid_symbols[DEDENT]) {
        PRINTF("[gml] \tmode: INDENT|DEDENT\n");

        mark_end(lexer);
        uint16_t indent = 0;

        while (!lexer->eof(lexer) && iswspace(lexer->lookahead)) {
            if (lexer->lookahead == '\t') {
                indent += 1;
                skip(lexer);
            }
            else if (lexer->lookahead == '\n') {
                indent = 0;
                skip(lexer);
            }
        }
//
//        if (lexer->eof(lexer)) {
//            return handle_eof(scanner, lexer, valid_symbols);
//        }

        size_t indent_diff = indent - scanner->last_indent;

        PRINTF("[gml] \tlast_indent=%d indent=%d indent_diff=%ld\n", scanner->last_indent, indent, indent_diff);

        if ((indent_diff == 1) && valid_symbols[INDENT]) {
            mark_end(lexer);

            if (scanner->last_indent == 0xFFFF) {
                lexer->result_symbol = ERROR;

                PRINTF("[gml] end: ERROR too many indents\n");
            }
            else {
                scanner->last_indent += 1;
                lexer->result_symbol = INDENT;

                PRINTF("[gml] end: indent up to %d\n", scanner->last_indent);
            }

            return true;
        }
        else if ((indent_diff == -1) && valid_symbols[DEDENT]) {
            if (scanner->last_indent == 0) {
                lexer->result_symbol = ERROR;

                PRINTF("[gml] end: ERROR too many dedents\n");
            }
            else {
                scanner->last_indent -= 1;
                lexer->result_symbol = DEDENT;

                PRINTF("[gml] end: dedent down to %d\n", scanner->last_indent);
            }

            return true;
        }
        else if ((indent_diff == 0) && valid_symbols[CURRENT]) {
            mark_end(lexer);
            lexer->result_symbol = CURRENT;

            PRINTF("[gml] end: current\n");

            return true;
        }
    }

    if (valid_symbols[LINE_START]) {
        PRINTF("[gml] \tmode: LINE_START\n");

        if (lexer->get_column(lexer) == 0) {
            lexer->result_symbol = LINE_START;

            PRINTF("[gml] end: line start\n");

            return true;
        }

        PRINTF("[gml] end\n");

        return false;
    }

    PRINTF("[gml] end\n");

    return false;
}
