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
    NEWLINE,
    INDENT,
    DEDENT,
    ERROR
};

typedef struct {
    uint16_t last_indent;
} Scanner;

static inline void advance(TSLexer *lexer) {
    lexer->advance(lexer, false);
}

static inline void skip(TSLexer *lexer) {
    lexer->advance(lexer, true);
}

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

void * tree_sitter_gml_external_scanner_create() {
//    PRINTF("tree_sitter_gml_external_scanner_create\n");

    Scanner *scanner = ts_malloc(sizeof(Scanner));
    scanner->last_indent = 0;
    return scanner;
}

void tree_sitter_gml_external_scanner_destroy(void *payload) {
//    PRINTF("tree_sitter_gml_external_scanner_destroy\n");

    Scanner *scanner = (Scanner *) payload;
    ts_free(scanner);
}

unsigned tree_sitter_gml_external_scanner_serialize(void *payload, char *buffer) {
    Scanner *scanner = (Scanner *) payload;

    size_t size = 0;

    buffer[size++] = (char)(scanner->last_indent & 0xFF);
    buffer[size++] = (char)((scanner->last_indent >> 8) & 0xFF);

//    PRINTF("tree_sitter_gml_external_scanner_serialize: %d\n", size);
    return size;
}

void tree_sitter_gml_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
//    PRINTF("tree_sitter_gml_external_scanner_deserialize: %d\n", length);
    Scanner *scanner = (Scanner *) payload;

    if (length == 0) {
        scanner->last_indent = 0;
        return;
    }

    scanner->last_indent = (uint16_t)buffer[0] | ((uint16_t)buffer[1] << 8);
}

bool tree_sitter_gml_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
//    PRINTF("tree_sitter_gml_external_scanner_scan\n");
    Scanner *scanner = (Scanner *) payload;

    PRINTF("start: char=");
    PRINT_CHAR(lexer->lookahead);
    PRINTF(" column=%d\n", lexer->get_column(lexer));

    PRINTF("\tNEWLINE=%d INDENT=%d DEDENT=%d ERROR=%d\n", valid_symbols[NEWLINE], valid_symbols[INDENT], valid_symbols[DEDENT], valid_symbols[ERROR]);

    if (lexer->eof(lexer)) {
        lexer->mark_end(lexer);

        if (valid_symbols[DEDENT] && (0 < scanner->last_indent)) {
            scanner->last_indent -= 1;
            lexer->result_symbol = DEDENT;

            PRINTF("end: eof dedent %d\n", scanner->last_indent);

            return true;
        }

        if (valid_symbols[NEWLINE]) {
            lexer->result_symbol = NEWLINE;

            PRINTF("end: eof newline\n");

            return true;
        }

        PRINTF("end\n");

        return false;
    }

    if (valid_symbols[NEWLINE]) {
        while (iswspace(lexer->lookahead)) {
            if (lexer->lookahead == '\n') {
                PRINTF("end: newline\n");
                skip(lexer);
                lexer->result_symbol = NEWLINE;
                return true;
            }

            skip(lexer);
        }
    }

    if (valid_symbols[INDENT] || valid_symbols[DEDENT]) {
        uint16_t indent = 0;

        lexer->mark_end(lexer);

        for (;;) {
            if (lexer->lookahead == '\t') {
                indent += 1;
                advance(lexer);
            }
            else if (lexer->lookahead == '\n') {
                indent = 0;
                advance(lexer);
            }
            else {
                break;
            }
        }

        size_t indent_diff = indent - scanner->last_indent;

        PRINTF("\tlast_indent=%d indent=%d indent_diff=%d\n", scanner->last_indent, indent, indent_diff);

        if ((indent_diff == 1) && valid_symbols[INDENT]) {
            if (scanner->last_indent == 0xFFFF) {
                lexer->result_symbol = ERROR;

                PRINTF("end: ERROR too many indents\n");
            }
            else {
                scanner->last_indent += 1;
                lexer->result_symbol = INDENT;

                PRINTF("end: indent %d\n", scanner->last_indent);
            }

            lexer->mark_end(lexer);
            return true;
        }
        else if ((indent_diff == -1) && valid_symbols[DEDENT]) {
            if (scanner->last_indent == 0) {
                lexer->result_symbol = ERROR;

                PRINTF("end: ERROR too many dedents\n");
            }
            else {
                scanner->last_indent -= 1;
                lexer->result_symbol = DEDENT;

                PRINTF("end: dedent %d\n", scanner->last_indent);
            }

            return true;
        }
    }

    PRINTF("end\n");
    return false;
}
