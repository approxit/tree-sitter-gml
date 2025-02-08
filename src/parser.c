#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 39
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 6
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 6

enum ts_symbol_identifiers {
  anon_sym_COLON = 1,
  anon_sym_PIPE = 2,
  sym__comment = 3,
  sym_text = 4,
  sym_text_or_empty = 5,
  sym_text_immediate = 6,
  sym__ws = 7,
  sym__line_start = 8,
  sym__line_end = 9,
  sym__indent = 10,
  sym__continue = 11,
  sym__dedent = 12,
  sym_error = 13,
  sym_source_file = 14,
  sym_model = 15,
  sym_section = 16,
  sym_body = 17,
  sym_struct_row = 18,
  sym_table_row = 19,
  sym__line_blank = 20,
  aux_sym_source_file_repeat1 = 21,
  aux_sym_body_repeat1 = 22,
  aux_sym_table_row_repeat1 = 23,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COLON] = ":",
  [anon_sym_PIPE] = "|",
  [sym__comment] = "_comment",
  [sym_text] = "text",
  [sym_text_or_empty] = "text",
  [sym_text_immediate] = "text",
  [sym__ws] = "_ws",
  [sym__line_start] = "_line_start",
  [sym__line_end] = "_line_end",
  [sym__indent] = "_indent",
  [sym__continue] = "_continue",
  [sym__dedent] = "_dedent",
  [sym_error] = "error",
  [sym_source_file] = "source_file",
  [sym_model] = "model",
  [sym_section] = "section",
  [sym_body] = "body",
  [sym_struct_row] = "struct_row",
  [sym_table_row] = "table_row",
  [sym__line_blank] = "_line_blank",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_body_repeat1] = "body_repeat1",
  [aux_sym_table_row_repeat1] = "table_row_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [sym__comment] = sym__comment,
  [sym_text] = sym_text,
  [sym_text_or_empty] = sym_text,
  [sym_text_immediate] = sym_text,
  [sym__ws] = sym__ws,
  [sym__line_start] = sym__line_start,
  [sym__line_end] = sym__line_end,
  [sym__indent] = sym__indent,
  [sym__continue] = sym__continue,
  [sym__dedent] = sym__dedent,
  [sym_error] = sym_error,
  [sym_source_file] = sym_source_file,
  [sym_model] = sym_model,
  [sym_section] = sym_section,
  [sym_body] = sym_body,
  [sym_struct_row] = sym_struct_row,
  [sym_table_row] = sym_table_row,
  [sym__line_blank] = sym__line_blank,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_body_repeat1] = aux_sym_body_repeat1,
  [aux_sym_table_row_repeat1] = aux_sym_table_row_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [sym__comment] = {
    .visible = false,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_text_or_empty] = {
    .visible = true,
    .named = true,
  },
  [sym_text_immediate] = {
    .visible = true,
    .named = true,
  },
  [sym__ws] = {
    .visible = false,
    .named = true,
  },
  [sym__line_start] = {
    .visible = false,
    .named = true,
  },
  [sym__line_end] = {
    .visible = false,
    .named = true,
  },
  [sym__indent] = {
    .visible = false,
    .named = true,
  },
  [sym__continue] = {
    .visible = false,
    .named = true,
  },
  [sym__dedent] = {
    .visible = false,
    .named = true,
  },
  [sym_error] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_model] = {
    .visible = true,
    .named = true,
  },
  [sym_section] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_row] = {
    .visible = true,
    .named = true,
  },
  [sym_table_row] = {
    .visible = true,
    .named = true,
  },
  [sym__line_blank] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_table_row_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_base = 1,
  field_body = 2,
  field_key = 3,
  field_name = 4,
  field_value = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_base] = "base",
  [field_body] = "body",
  [field_key] = "key",
  [field_name] = "name",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 3},
  [3] = {.index = 5, .length = 1},
  [4] = {.index = 6, .length = 2},
  [5] = {.index = 8, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_base, 1},
    {field_name, 3},
  [2] =
    {field_base, 1},
    {field_body, 5},
    {field_name, 3},
  [5] =
    {field_name, 0},
  [6] =
    {field_body, 2},
    {field_name, 0},
  [8] =
    {field_key, 0},
    {field_value, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 3,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 10,
  [14] = 11,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 17,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 24,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(3);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == '|') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '\t') SKIP(1);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '|') ADVANCE(5);
      if (lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(8);
      END_STATE();
    case 2:
      if (lookahead == '\r') ADVANCE(11);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != '|') ADVANCE(12);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '|') ADVANCE(8);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '|') ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_text_or_empty);
      if (lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '|') ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_text_or_empty);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '|') ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_text_immediate);
      if (lookahead == '\t') ADVANCE(13);
      if (lookahead == '\r') ADVANCE(11);
      if (lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '|') ADVANCE(12);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_text_immediate);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '|') ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym__ws);
      if (lookahead == '\r') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(13);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 0, .external_lex_state = 2},
  [6] = {.lex_state = 0, .external_lex_state = 2},
  [7] = {.lex_state = 0, .external_lex_state = 3},
  [8] = {.lex_state = 0, .external_lex_state = 4},
  [9] = {.lex_state = 2, .external_lex_state = 5},
  [10] = {.lex_state = 0, .external_lex_state = 6},
  [11] = {.lex_state = 0, .external_lex_state = 6},
  [12] = {.lex_state = 0, .external_lex_state = 6},
  [13] = {.lex_state = 0, .external_lex_state = 6},
  [14] = {.lex_state = 0, .external_lex_state = 6},
  [15] = {.lex_state = 0, .external_lex_state = 5},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0, .external_lex_state = 2},
  [18] = {.lex_state = 0, .external_lex_state = 2},
  [19] = {.lex_state = 9, .external_lex_state = 5},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0, .external_lex_state = 6},
  [22] = {.lex_state = 0, .external_lex_state = 6},
  [23] = {.lex_state = 0, .external_lex_state = 6},
  [24] = {.lex_state = 0, .external_lex_state = 2},
  [25] = {.lex_state = 0, .external_lex_state = 2},
  [26] = {.lex_state = 0, .external_lex_state = 6},
  [27] = {.lex_state = 0, .external_lex_state = 6},
  [28] = {.lex_state = 0, .external_lex_state = 6},
  [29] = {.lex_state = 0, .external_lex_state = 2},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0, .external_lex_state = 5},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0, .external_lex_state = 5},
  [36] = {.lex_state = 0, .external_lex_state = 5},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 9},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [sym__comment] = ACTIONS(3),
    [sym__line_start] = ACTIONS(1),
    [sym__line_end] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__continue] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
    [sym_error] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(34),
    [sym_model] = STATE(6),
    [sym__line_blank] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__comment] = ACTIONS(3),
    [sym__line_start] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      sym__comment,
    ACTIONS(13), 1,
      sym_text,
    STATE(16), 1,
      aux_sym_table_row_repeat1,
    STATE(23), 3,
      sym_section,
      sym_struct_row,
      sym_table_row,
  [18] = 5,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      sym__comment,
    ACTIONS(13), 1,
      sym_text,
    STATE(16), 1,
      aux_sym_table_row_repeat1,
    STATE(10), 3,
      sym_section,
      sym_struct_row,
      sym_table_row,
  [36] = 5,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      sym__comment,
    ACTIONS(13), 1,
      sym_text,
    STATE(16), 1,
      aux_sym_table_row_repeat1,
    STATE(13), 3,
      sym_section,
      sym_struct_row,
      sym_table_row,
  [54] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      sym__line_start,
    STATE(5), 3,
      sym_model,
      sym__line_blank,
      aux_sym_source_file_repeat1,
  [69] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(7), 1,
      sym__line_start,
    ACTIONS(20), 1,
      ts_builtin_sym_end,
    STATE(5), 3,
      sym_model,
      sym__line_blank,
      aux_sym_source_file_repeat1,
  [84] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(22), 1,
      sym__indent,
    STATE(21), 1,
      sym_body,
    ACTIONS(24), 2,
      sym__continue,
      sym__dedent,
  [98] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(28), 1,
      sym__indent,
    STATE(29), 1,
      sym_body,
    ACTIONS(26), 2,
      sym__line_start,
      ts_builtin_sym_end,
  [112] = 4,
    ACTIONS(11), 1,
      sym__comment,
    ACTIONS(30), 1,
      sym_text_immediate,
    ACTIONS(32), 1,
      sym__ws,
    ACTIONS(34), 1,
      sym__line_end,
  [125] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(36), 1,
      sym__continue,
    ACTIONS(38), 1,
      sym__dedent,
    STATE(11), 1,
      aux_sym_body_repeat1,
  [138] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(36), 1,
      sym__continue,
    ACTIONS(40), 1,
      sym__dedent,
    STATE(12), 1,
      aux_sym_body_repeat1,
  [151] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(42), 1,
      sym__continue,
    ACTIONS(45), 1,
      sym__dedent,
    STATE(12), 1,
      aux_sym_body_repeat1,
  [164] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(36), 1,
      sym__continue,
    ACTIONS(47), 1,
      sym__dedent,
    STATE(14), 1,
      aux_sym_body_repeat1,
  [177] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(36), 1,
      sym__continue,
    ACTIONS(49), 1,
      sym__dedent,
    STATE(12), 1,
      aux_sym_body_repeat1,
  [190] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(51), 1,
      anon_sym_COLON,
    ACTIONS(53), 1,
      sym__line_end,
  [200] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(55), 1,
      anon_sym_PIPE,
    STATE(20), 1,
      aux_sym_table_row_repeat1,
  [210] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(57), 2,
      sym__line_start,
      ts_builtin_sym_end,
  [218] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(59), 2,
      sym__line_start,
      ts_builtin_sym_end,
  [226] = 3,
    ACTIONS(11), 1,
      sym__comment,
    ACTIONS(61), 1,
      sym_text_or_empty,
    ACTIONS(63), 1,
      sym__line_end,
  [236] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(65), 1,
      anon_sym_PIPE,
    STATE(20), 1,
      aux_sym_table_row_repeat1,
  [246] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(68), 2,
      sym__continue,
      sym__dedent,
  [254] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(57), 2,
      sym__continue,
      sym__dedent,
  [262] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(45), 2,
      sym__continue,
      sym__dedent,
  [270] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(70), 2,
      sym__line_start,
      ts_builtin_sym_end,
  [278] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(72), 2,
      sym__line_start,
      ts_builtin_sym_end,
  [286] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(74), 2,
      sym__continue,
      sym__dedent,
  [294] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(76), 2,
      sym__continue,
      sym__dedent,
  [302] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(70), 2,
      sym__continue,
      sym__dedent,
  [310] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(78), 2,
      sym__line_start,
      ts_builtin_sym_end,
  [318] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(80), 1,
      anon_sym_PIPE,
  [325] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(82), 1,
      sym__line_end,
  [332] = 2,
    ACTIONS(11), 1,
      sym__comment,
    ACTIONS(84), 1,
      sym_text,
  [339] = 2,
    ACTIONS(11), 1,
      sym__comment,
    ACTIONS(86), 1,
      sym_text,
  [346] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
  [353] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(90), 1,
      sym__line_end,
  [360] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(92), 1,
      sym__line_end,
  [367] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(94), 1,
      anon_sym_COLON,
  [374] = 2,
    ACTIONS(11), 1,
      sym__comment,
    ACTIONS(61), 1,
      sym_text_or_empty,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 18,
  [SMALL_STATE(4)] = 36,
  [SMALL_STATE(5)] = 54,
  [SMALL_STATE(6)] = 69,
  [SMALL_STATE(7)] = 84,
  [SMALL_STATE(8)] = 98,
  [SMALL_STATE(9)] = 112,
  [SMALL_STATE(10)] = 125,
  [SMALL_STATE(11)] = 138,
  [SMALL_STATE(12)] = 151,
  [SMALL_STATE(13)] = 164,
  [SMALL_STATE(14)] = 177,
  [SMALL_STATE(15)] = 190,
  [SMALL_STATE(16)] = 200,
  [SMALL_STATE(17)] = 210,
  [SMALL_STATE(18)] = 218,
  [SMALL_STATE(19)] = 226,
  [SMALL_STATE(20)] = 236,
  [SMALL_STATE(21)] = 246,
  [SMALL_STATE(22)] = 254,
  [SMALL_STATE(23)] = 262,
  [SMALL_STATE(24)] = 270,
  [SMALL_STATE(25)] = 278,
  [SMALL_STATE(26)] = 286,
  [SMALL_STATE(27)] = 294,
  [SMALL_STATE(28)] = 302,
  [SMALL_STATE(29)] = 310,
  [SMALL_STATE(30)] = 318,
  [SMALL_STATE(31)] = 325,
  [SMALL_STATE(32)] = 332,
  [SMALL_STATE(33)] = 339,
  [SMALL_STATE(34)] = 346,
  [SMALL_STATE(35)] = 353,
  [SMALL_STATE(36)] = 360,
  [SMALL_STATE(37)] = 367,
  [SMALL_STATE(38)] = 374,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2, 0, 3),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model, 5, 0, 1),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 3, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line_blank, 3, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_row_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 3, 0, 4),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 4, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line_blank, 2, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_row, 3, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_row, 4, 0, 5),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model, 6, 0, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_row_repeat1, 2, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [88] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__line_start = 0,
  ts_external_token__line_end = 1,
  ts_external_token__indent = 2,
  ts_external_token__continue = 3,
  ts_external_token__dedent = 4,
  ts_external_token_error = 5,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__line_start] = sym__line_start,
  [ts_external_token__line_end] = sym__line_end,
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__continue] = sym__continue,
  [ts_external_token__dedent] = sym__dedent,
  [ts_external_token_error] = sym_error,
};

static const bool ts_external_scanner_states[7][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__line_start] = true,
    [ts_external_token__line_end] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__continue] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token_error] = true,
  },
  [2] = {
    [ts_external_token__line_start] = true,
  },
  [3] = {
    [ts_external_token__indent] = true,
    [ts_external_token__continue] = true,
    [ts_external_token__dedent] = true,
  },
  [4] = {
    [ts_external_token__line_start] = true,
    [ts_external_token__indent] = true,
  },
  [5] = {
    [ts_external_token__line_end] = true,
  },
  [6] = {
    [ts_external_token__continue] = true,
    [ts_external_token__dedent] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_gml_external_scanner_create(void);
void tree_sitter_gml_external_scanner_destroy(void *);
bool tree_sitter_gml_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_gml_external_scanner_serialize(void *, char *);
void tree_sitter_gml_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_gml(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_gml_external_scanner_create,
      tree_sitter_gml_external_scanner_destroy,
      tree_sitter_gml_external_scanner_scan,
      tree_sitter_gml_external_scanner_serialize,
      tree_sitter_gml_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
