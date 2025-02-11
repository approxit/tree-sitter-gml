#include "tree_sitter/parser.h"
#include "tree_sitter/alloc.h"
#include "tree_sitter/array.h"

//#define DEBUG_PRINT

#ifdef __EMSCRIPTEN__
    #undef DEBUG_PRINT
#endif

#ifdef DEBUG_PRINT
    #include <stdio.h>
    #define PRINTF(...) printf(__VA_ARGS__)
    #define PRINT_CHAR(...) print_char(__VA_ARGS__)
#else
    #define PRINTF(...)
    #define PRINT_CHAR(...)
#endif

enum TokenType {
    LINE_END,
    INDENT,
    CONTINUE,
    DEDENT,
    IDENTIFIER,
    TEXT_START,
    TEXT_FRAGMENT,
    STRING,
    COMMENT,
    ERROR
};

typedef enum {
    NO_RETURN,
    RETURN_FALSE,
    RETURN_TRUE
} ResultType;

typedef struct {
    uint16_t last_indent;
    bool has_seen_eof;
} Scanner;

#ifdef DEBUG_PRINT
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

    PRINTF("[gml] \tadvanced to char=");
    PRINT_CHAR(lexer->lookahead);
    PRINTF("\n");
}

static inline void skip(TSLexer *lexer) {
    lexer->advance(lexer, true);

    PRINTF("[gml] \tskipped to char=");
    PRINT_CHAR(lexer->lookahead);
    PRINTF("\n");
}

static inline void mark_end(TSLexer *lexer) {
    lexer->mark_end(lexer);

    PRINTF("[gml] \tmark_end\n");
}

static inline ResultType handle_eof(TSLexer *lexer, Scanner *scanner, const bool *valid_symbols) {
    PRINTF("[gml] \tmode: EOF\n");

    if (valid_symbols[DEDENT] && (0 < scanner->last_indent)) {
        scanner->last_indent -= 1;
        lexer->result_symbol = DEDENT;

        PRINTF("[gml] end (eof): dedent %d\n", scanner->last_indent);

        return RETURN_TRUE;
    }

    if (valid_symbols[LINE_END] && !scanner->has_seen_eof) {
        lexer->result_symbol = LINE_END;
        scanner->has_seen_eof = true;

        PRINTF("[gml] end (eof): line end\n");

        return RETURN_TRUE;
    }

    PRINTF("[gml] end\n");

    return RETURN_FALSE;
}

static inline ResultType handle_error(TSLexer *lexer) {
    PRINTF("[gml] \tmode: ERROR\n");

    PRINTF("[gml] end\n");

    return RETURN_FALSE;
}

static inline ResultType handle_string(TSLexer *lexer) {
    PRINTF("[gml] \tmode: STRING\n");

    if (lexer->lookahead != '"') {
        PRINTF("[gml] \tskip mode\n");

        return NO_RETURN;
    }

    advance(lexer);

    while (!lexer->eof(lexer)) {
        if (lexer->lookahead == '"') {
            advance(lexer);
            lexer->result_symbol = STRING;

            PRINTF("[gml] end (string): string\n");

            return RETURN_TRUE;
        }
        else if (lexer->lookahead == '\\') {
            advance(lexer);
            advance(lexer);
        }
        else if (lexer->lookahead == '\n') {
            lexer->result_symbol = ERROR;

            PRINTF("[gml] end (string): ERROR string not closed\n");

            return RETURN_TRUE;
        }
        else {
            advance(lexer);
        }
    }

    PRINTF("[gml] \tskip mode\n");

    return NO_RETURN;
}

static inline ResultType handle_identifier_text_start_text_fragment(TSLexer *lexer, const bool *valid_symbols) {
    PRINTF("[gml] \tmode: IDENTIFIER|TEXT_START|TEXT_FRAGMENT\n");

    if (((lexer->lookahead == ' ') || (lexer->lookahead == '\t')) && !valid_symbols[TEXT_FRAGMENT]) {
        PRINTF("[gml] \tskip mode\n");

        return NO_RETURN;
    }

    bool has_any_size = false;
    while (!lexer->eof(lexer)) {
        if ((lexer->lookahead == ':')
            || (lexer->lookahead == '=')
            || (lexer->lookahead == '|')
            || (lexer->lookahead == '#')
            || (lexer->lookahead == '"')
            || (lexer->lookahead == '[')
            || (lexer->lookahead == ']')
            || (lexer->lookahead == '\n')) {
            break;
        }
        else if ((lexer->lookahead != ' ') && (lexer->lookahead != '\t')) {
            advance(lexer);
            mark_end(lexer);
        }
        else {
            advance(lexer);
        }

        has_any_size = true;
    }

    if (!has_any_size) {
        PRINTF("[gml] \tskip mode\n");

        return NO_RETURN;
    }

    if (valid_symbols[TEXT_START]
            && (lexer->lookahead != ':')
            && (lexer->lookahead != '=')
            && (lexer->lookahead != '|')) {
        mark_end(lexer);

        lexer->result_symbol = TEXT_START;

        PRINTF("[gml] end (identifier_text_start_text_fragment): text start\n");

        return RETURN_TRUE;
    }
    else if (valid_symbols[TEXT_FRAGMENT]) {
        mark_end(lexer);

        lexer->result_symbol = TEXT_FRAGMENT;

        PRINTF("[gml] end (identifier_text_start_text_fragment): text fragment\n");

        return RETURN_TRUE;
    }
    else if (valid_symbols[IDENTIFIER]) {
        lexer->result_symbol = IDENTIFIER;

        PRINTF("[gml] end (identifier_text_start_text_fragment): identifier\n");

        return RETURN_TRUE;
    }

    PRINTF("[gml] \tskip mode\n");

    return NO_RETURN;
}

static inline ResultType handle_ws_control_comments(TSLexer *lexer, Scanner *scanner, const bool *valid_symbols) {
    PRINTF("[gml] \tmode: WS control | COMMENTS\n");

    mark_end(lexer);

    uint16_t indent = 0;
    bool has_seen_eol = false;
    bool has_seen_space = false;

    while (!lexer->eof(lexer)) {
        if (lexer->lookahead == '\t') {
            indent += 1;
            skip(lexer);
        }
        else if (lexer->lookahead == '\n') {
            has_seen_eol = true;

            if (valid_symbols[LINE_END]) {
                indent = 0;
                advance(lexer);
                mark_end(lexer);
            }
            else {
                break;
            }
        }
        else if (lexer->lookahead == '#') {
            while (!lexer->eof(lexer) && (lexer->lookahead != '\n')) {
                advance(lexer);
            }

            mark_end(lexer);
            lexer->result_symbol = COMMENT;

            return RETURN_TRUE;
        }
        else if (lexer->lookahead == ' ') {
            has_seen_space = true;
            skip(lexer);
        }
        else {
            break;
        }
    }

    if (has_seen_space && !valid_symbols[COMMENT]) {
        PRINTF("[gml] end (ws_control_comments)\n");

        return NO_RETURN;
    }

    if (has_seen_eol && valid_symbols[LINE_END]) {
        lexer->result_symbol = LINE_END;

        PRINTF("[gml] end (ws_control_comments): line end\n");

        return RETURN_TRUE;
    }

    int32_t indent_diff = indent - scanner->last_indent;

    PRINTF("[gml] \tlast_indent=%d indent=%d indent_diff=%d\n", scanner->last_indent, indent, indent_diff);

    if ((indent_diff == 1) && valid_symbols[INDENT]) {
        mark_end(lexer);

        if (scanner->last_indent == 0xFFFF) {
            lexer->result_symbol = ERROR;

            PRINTF("[gml] end (ws_control_comments): ERROR too many indents\n");
        }
        else {
            scanner->last_indent += 1;
            lexer->result_symbol = INDENT;

            PRINTF("[gml] end (ws_control_comments): indent up to %d\n", scanner->last_indent);
        }

        return RETURN_TRUE;
    }
    else if ((indent_diff < 0) && valid_symbols[DEDENT]) {
        if (scanner->last_indent == 0) {
            lexer->result_symbol = ERROR;

            PRINTF("[gml] end (ws_control_comments): ERROR too many dedents\n");
        }
        else {
            scanner->last_indent -= 1;
            lexer->result_symbol = DEDENT;

            PRINTF("[gml] end (ws_control_comments): dedent down to %d\n", scanner->last_indent);
        }

        return RETURN_TRUE;
    }
    else if ((indent_diff == 0) && valid_symbols[CONTINUE]) {
        mark_end(lexer);
        lexer->result_symbol = CONTINUE;

        PRINTF("[gml] end (ws_control_comments): current\n");

        return RETURN_TRUE;
    }

    PRINTF("[gml] end (ws_control_comments)\n");

    return RETURN_FALSE;
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

    uint32_t column = (scanner->last_indent * 3) + lexer->get_column(lexer) + 1;
    PRINTF(" line_with_last_indent=%d\n", column);

    PRINTF(
        "[gml] \tvalid_symbols: LINE_END=%d INDENT=%d CONTINUE=%d DEDENT=%d IDENTIFIER=%d TEXT_START=%d TEXT_FRAGMENT=%d STRING=%d COMMENT=%d ERROR=%d\n",
        valid_symbols[LINE_END],
        valid_symbols[INDENT],
        valid_symbols[CONTINUE],
        valid_symbols[DEDENT],
        valid_symbols[IDENTIFIER],
        valid_symbols[TEXT_START],
        valid_symbols[TEXT_FRAGMENT],
        valid_symbols[STRING],
        valid_symbols[COMMENT],
        valid_symbols[ERROR]
    );

    if (valid_symbols[ERROR]) {
        ResultType result = handle_error(lexer);
        if (result) {
            return result == RETURN_TRUE;
        }
    }

    if (lexer->eof(lexer)) {
        ResultType result = handle_eof(lexer, scanner, valid_symbols);
        if (result) {
            return result == RETURN_TRUE;
        }
    }

    if ((lexer->lookahead != '#') && (lexer->lookahead != ':') && (lexer->lookahead != '|') && (lexer->lookahead != '=')) {
        if (valid_symbols[IDENTIFIER] || valid_symbols[TEXT_START] || valid_symbols[TEXT_FRAGMENT]) {
            ResultType result = handle_identifier_text_start_text_fragment(lexer, valid_symbols);
            if (result) {
                return result == RETURN_TRUE;
            }
        }
    }

    if (lexer->lookahead == '"') {
        if (valid_symbols[STRING]) {
            ResultType result = handle_string(lexer);
            if (result) {
                return result == RETURN_TRUE;
            }
        }
    }

    if ((lexer->lookahead == '\t') || (lexer->lookahead == '\n') || lexer->lookahead == ' ' || lexer->lookahead == '#') {
        if (valid_symbols[LINE_END] || valid_symbols[INDENT] || valid_symbols[CONTINUE] || valid_symbols[DEDENT] || valid_symbols[COMMENT]) {
            ResultType result = handle_ws_control_comments(lexer, scanner, valid_symbols);
            if (result) {
                return result == RETURN_TRUE;
            }
        }
    }

    PRINTF("[gml] end\n");

    return false;
}
