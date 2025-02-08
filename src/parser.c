#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 73
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 22
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 6
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 12

enum ts_symbol_identifiers {
  anon_sym_COLON = 1,
  anon_sym_EQ = 2,
  anon_sym_PIPE = 3,
  sym_text = 4,
  sym__ws = 5,
  sym__line_start = 6,
  sym__line_end = 7,
  sym__indent = 8,
  sym__continue = 9,
  sym__dedent = 10,
  sym_error = 11,
  sym_source_file = 12,
  sym_object = 13,
  sym_section = 14,
  sym_body = 15,
  sym_struct_row = 16,
  sym_table_row = 17,
  sym__line_blank = 18,
  aux_sym_source_file_repeat1 = 19,
  aux_sym_body_repeat1 = 20,
  aux_sym_table_row_repeat1 = 21,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
  [anon_sym_PIPE] = "|",
  [sym_text] = "text",
  [sym__ws] = "_ws",
  [sym__line_start] = "_line_start",
  [sym__line_end] = "_line_end",
  [sym__indent] = "_indent",
  [sym__continue] = "_continue",
  [sym__dedent] = "_dedent",
  [sym_error] = "error",
  [sym_source_file] = "source_file",
  [sym_object] = "object",
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
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [sym_text] = sym_text,
  [sym__ws] = sym__ws,
  [sym__line_start] = sym__line_start,
  [sym__line_end] = sym__line_end,
  [sym__indent] = sym__indent,
  [sym__continue] = sym__continue,
  [sym__dedent] = sym__dedent,
  [sym_error] = sym_error,
  [sym_source_file] = sym_source_file,
  [sym_object] = sym_object,
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [sym_text] = {
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
  [sym_object] = {
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
  [3] = {.index = 5, .length = 2},
  [4] = {.index = 7, .length = 3},
  [5] = {.index = 10, .length = 2},
  [6] = {.index = 12, .length = 1},
  [7] = {.index = 13, .length = 3},
  [8] = {.index = 16, .length = 2},
  [9] = {.index = 18, .length = 2},
  [10] = {.index = 20, .length = 2},
  [11] = {.index = 22, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_base, 0},
    {field_name, 2},
  [2] =
    {field_base, 0},
    {field_body, 4},
    {field_name, 2},
  [5] =
    {field_base, 0},
    {field_name, 3},
  [7] =
    {field_base, 0},
    {field_body, 5},
    {field_name, 3},
  [10] =
    {field_base, 0},
    {field_name, 4},
  [12] =
    {field_name, 0},
  [13] =
    {field_base, 0},
    {field_body, 6},
    {field_name, 4},
  [16] =
    {field_body, 2},
    {field_name, 0},
  [18] =
    {field_key, 0},
    {field_value, 2},
  [20] =
    {field_key, 0},
    {field_value, 3},
  [22] =
    {field_key, 0},
    {field_value, 4},
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
  [4] = 2,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 7,
  [13] = 9,
  [14] = 10,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 16,
  [21] = 17,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 22,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 24,
  [45] = 42,
  [46] = 28,
  [47] = 32,
  [48] = 37,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 50,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 57,
  [64] = 59,
  [65] = 65,
  [66] = 66,
  [67] = 65,
  [68] = 68,
  [69] = 56,
  [70] = 70,
  [71] = 55,
  [72] = 72,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(3);
      if (lookahead == '\r') SKIP(0);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == '=') ADVANCE(5);
      if (lookahead == '|') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 1:
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '|') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '=') ADVANCE(8);
      END_STATE();
    case 2:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '=' &&
          lookahead != '|') ADVANCE(8);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '=' &&
          lookahead != '|') ADVANCE(8);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '=' &&
          lookahead != '|') ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym__ws);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym__ws);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '=' &&
          lookahead != '|') ADVANCE(8);
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
  [5] = {.lex_state = 0, .external_lex_state = 3},
  [6] = {.lex_state = 0, .external_lex_state = 2},
  [7] = {.lex_state = 0, .external_lex_state = 4},
  [8] = {.lex_state = 0, .external_lex_state = 2},
  [9] = {.lex_state = 0, .external_lex_state = 4},
  [10] = {.lex_state = 0, .external_lex_state = 4},
  [11] = {.lex_state = 0, .external_lex_state = 5},
  [12] = {.lex_state = 0, .external_lex_state = 5},
  [13] = {.lex_state = 0, .external_lex_state = 5},
  [14] = {.lex_state = 0, .external_lex_state = 5},
  [15] = {.lex_state = 1, .external_lex_state = 3},
  [16] = {.lex_state = 0, .external_lex_state = 6},
  [17] = {.lex_state = 0, .external_lex_state = 6},
  [18] = {.lex_state = 0, .external_lex_state = 6},
  [19] = {.lex_state = 1, .external_lex_state = 3},
  [20] = {.lex_state = 0, .external_lex_state = 6},
  [21] = {.lex_state = 0, .external_lex_state = 6},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0, .external_lex_state = 2},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0, .external_lex_state = 2},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 0, .external_lex_state = 2},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0, .external_lex_state = 2},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0, .external_lex_state = 6},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 0, .external_lex_state = 6},
  [37] = {.lex_state = 0, .external_lex_state = 2},
  [38] = {.lex_state = 0, .external_lex_state = 6},
  [39] = {.lex_state = 0, .external_lex_state = 6},
  [40] = {.lex_state = 0, .external_lex_state = 6},
  [41] = {.lex_state = 0, .external_lex_state = 6},
  [42] = {.lex_state = 0, .external_lex_state = 6},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0, .external_lex_state = 6},
  [45] = {.lex_state = 0, .external_lex_state = 2},
  [46] = {.lex_state = 0, .external_lex_state = 6},
  [47] = {.lex_state = 0, .external_lex_state = 6},
  [48] = {.lex_state = 0, .external_lex_state = 6},
  [49] = {.lex_state = 0, .external_lex_state = 2},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 0, .external_lex_state = 3},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 0, .external_lex_state = 3},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0, .external_lex_state = 3},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 0, .external_lex_state = 3},
  [64] = {.lex_state = 0, .external_lex_state = 3},
  [65] = {.lex_state = 0, .external_lex_state = 3},
  [66] = {.lex_state = 0, .external_lex_state = 3},
  [67] = {.lex_state = 0, .external_lex_state = 3},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 0, .external_lex_state = 3},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [sym__ws] = ACTIONS(1),
    [sym__line_start] = ACTIONS(1),
    [sym__line_end] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__continue] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
    [sym_error] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(72),
    [sym__line_blank] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__line_start] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(7), 1,
      anon_sym_PIPE,
    ACTIONS(9), 1,
      sym_text,
    STATE(23), 1,
      aux_sym_table_row_repeat1,
    STATE(16), 4,
      sym_object,
      sym_section,
      sym_struct_row,
      sym_table_row,
  [16] = 4,
    ACTIONS(7), 1,
      anon_sym_PIPE,
    ACTIONS(9), 1,
      sym_text,
    STATE(23), 1,
      aux_sym_table_row_repeat1,
    STATE(36), 4,
      sym_object,
      sym_section,
      sym_struct_row,
      sym_table_row,
  [32] = 4,
    ACTIONS(7), 1,
      anon_sym_PIPE,
    ACTIONS(9), 1,
      sym_text,
    STATE(23), 1,
      aux_sym_table_row_repeat1,
    STATE(20), 4,
      sym_object,
      sym_section,
      sym_struct_row,
      sym_table_row,
  [48] = 4,
    ACTIONS(11), 1,
      anon_sym_COLON,
    ACTIONS(13), 1,
      anon_sym_EQ,
    ACTIONS(15), 1,
      sym__ws,
    ACTIONS(17), 1,
      sym__line_end,
  [61] = 3,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      sym__line_start,
    STATE(6), 2,
      sym__line_blank,
      aux_sym_source_file_repeat1,
  [72] = 3,
    ACTIONS(26), 1,
      sym__indent,
    STATE(45), 1,
      sym_body,
    ACTIONS(24), 2,
      sym__line_start,
      ts_builtin_sym_end,
  [83] = 3,
    ACTIONS(5), 1,
      sym__line_start,
    ACTIONS(28), 1,
      ts_builtin_sym_end,
    STATE(6), 2,
      sym__line_blank,
      aux_sym_source_file_repeat1,
  [94] = 3,
    ACTIONS(26), 1,
      sym__indent,
    STATE(24), 1,
      sym_body,
    ACTIONS(30), 2,
      sym__line_start,
      ts_builtin_sym_end,
  [105] = 3,
    ACTIONS(26), 1,
      sym__indent,
    STATE(32), 1,
      sym_body,
    ACTIONS(32), 2,
      sym__line_start,
      ts_builtin_sym_end,
  [116] = 3,
    ACTIONS(34), 1,
      sym__indent,
    STATE(34), 1,
      sym_body,
    ACTIONS(36), 2,
      sym__continue,
      sym__dedent,
  [127] = 3,
    ACTIONS(34), 1,
      sym__indent,
    STATE(42), 1,
      sym_body,
    ACTIONS(24), 2,
      sym__continue,
      sym__dedent,
  [138] = 3,
    ACTIONS(34), 1,
      sym__indent,
    STATE(44), 1,
      sym_body,
    ACTIONS(30), 2,
      sym__continue,
      sym__dedent,
  [149] = 3,
    ACTIONS(34), 1,
      sym__indent,
    STATE(47), 1,
      sym_body,
    ACTIONS(32), 2,
      sym__continue,
      sym__dedent,
  [160] = 3,
    ACTIONS(38), 1,
      sym_text,
    ACTIONS(40), 1,
      sym__line_end,
    STATE(49), 1,
      sym_object,
  [170] = 3,
    ACTIONS(42), 1,
      sym__continue,
    ACTIONS(44), 1,
      sym__dedent,
    STATE(17), 1,
      aux_sym_body_repeat1,
  [180] = 3,
    ACTIONS(42), 1,
      sym__continue,
    ACTIONS(46), 1,
      sym__dedent,
    STATE(18), 1,
      aux_sym_body_repeat1,
  [190] = 3,
    ACTIONS(48), 1,
      sym__continue,
    ACTIONS(51), 1,
      sym__dedent,
    STATE(18), 1,
      aux_sym_body_repeat1,
  [200] = 3,
    ACTIONS(53), 1,
      sym_text,
    ACTIONS(55), 1,
      sym__ws,
    ACTIONS(57), 1,
      sym__line_end,
  [210] = 3,
    ACTIONS(42), 1,
      sym__continue,
    ACTIONS(59), 1,
      sym__dedent,
    STATE(21), 1,
      aux_sym_body_repeat1,
  [220] = 3,
    ACTIONS(42), 1,
      sym__continue,
    ACTIONS(61), 1,
      sym__dedent,
    STATE(18), 1,
      aux_sym_body_repeat1,
  [230] = 2,
    ACTIONS(63), 1,
      sym_text,
    ACTIONS(65), 1,
      sym__ws,
  [237] = 2,
    ACTIONS(67), 1,
      anon_sym_PIPE,
    STATE(31), 1,
      aux_sym_table_row_repeat1,
  [244] = 1,
    ACTIONS(69), 2,
      sym__line_start,
      ts_builtin_sym_end,
  [249] = 2,
    ACTIONS(71), 1,
      anon_sym_PIPE,
    ACTIONS(73), 1,
      sym__ws,
  [256] = 2,
    ACTIONS(75), 1,
      sym_text,
    ACTIONS(77), 1,
      sym__ws,
  [263] = 2,
    ACTIONS(79), 1,
      anon_sym_COLON,
    ACTIONS(81), 1,
      anon_sym_EQ,
  [270] = 1,
    ACTIONS(83), 2,
      sym__line_start,
      ts_builtin_sym_end,
  [275] = 2,
    ACTIONS(85), 1,
      sym_text,
    ACTIONS(87), 1,
      sym__ws,
  [282] = 1,
    ACTIONS(89), 2,
      sym__line_start,
      ts_builtin_sym_end,
  [287] = 2,
    ACTIONS(91), 1,
      anon_sym_PIPE,
    STATE(31), 1,
      aux_sym_table_row_repeat1,
  [294] = 1,
    ACTIONS(94), 2,
      sym__line_start,
      ts_builtin_sym_end,
  [299] = 2,
    ACTIONS(96), 1,
      anon_sym_PIPE,
    ACTIONS(98), 1,
      sym__ws,
  [306] = 1,
    ACTIONS(100), 2,
      sym__continue,
      sym__dedent,
  [311] = 2,
    ACTIONS(102), 1,
      sym_text,
    ACTIONS(104), 1,
      sym__ws,
  [318] = 1,
    ACTIONS(51), 2,
      sym__continue,
      sym__dedent,
  [323] = 1,
    ACTIONS(106), 2,
      sym__line_start,
      ts_builtin_sym_end,
  [328] = 1,
    ACTIONS(108), 2,
      sym__continue,
      sym__dedent,
  [333] = 1,
    ACTIONS(110), 2,
      sym__continue,
      sym__dedent,
  [338] = 1,
    ACTIONS(112), 2,
      sym__continue,
      sym__dedent,
  [343] = 1,
    ACTIONS(114), 2,
      sym__continue,
      sym__dedent,
  [348] = 1,
    ACTIONS(116), 2,
      sym__continue,
      sym__dedent,
  [353] = 2,
    ACTIONS(118), 1,
      anon_sym_COLON,
    ACTIONS(120), 1,
      sym__ws,
  [360] = 1,
    ACTIONS(69), 2,
      sym__continue,
      sym__dedent,
  [365] = 1,
    ACTIONS(116), 2,
      sym__line_start,
      ts_builtin_sym_end,
  [370] = 1,
    ACTIONS(83), 2,
      sym__continue,
      sym__dedent,
  [375] = 1,
    ACTIONS(94), 2,
      sym__continue,
      sym__dedent,
  [380] = 1,
    ACTIONS(106), 2,
      sym__continue,
      sym__dedent,
  [385] = 1,
    ACTIONS(19), 2,
      sym__line_start,
      ts_builtin_sym_end,
  [390] = 2,
    ACTIONS(122), 1,
      sym_text,
    ACTIONS(124), 1,
      sym__ws,
  [397] = 2,
    ACTIONS(53), 1,
      sym_text,
    ACTIONS(55), 1,
      sym__ws,
  [404] = 2,
    ACTIONS(126), 1,
      sym_text,
    ACTIONS(128), 1,
      sym__ws,
  [411] = 1,
    ACTIONS(130), 1,
      sym__line_end,
  [415] = 1,
    ACTIONS(102), 1,
      sym_text,
  [419] = 1,
    ACTIONS(132), 1,
      sym_text,
  [423] = 1,
    ACTIONS(85), 1,
      sym_text,
  [427] = 1,
    ACTIONS(134), 1,
      sym__line_end,
  [431] = 1,
    ACTIONS(96), 1,
      anon_sym_PIPE,
  [435] = 1,
    ACTIONS(136), 1,
      sym__line_end,
  [439] = 1,
    ACTIONS(138), 1,
      anon_sym_COLON,
  [443] = 1,
    ACTIONS(140), 1,
      anon_sym_PIPE,
  [447] = 1,
    ACTIONS(142), 1,
      sym_text,
  [451] = 1,
    ACTIONS(144), 1,
      sym__line_end,
  [455] = 1,
    ACTIONS(146), 1,
      sym__line_end,
  [459] = 1,
    ACTIONS(148), 1,
      sym__line_end,
  [463] = 1,
    ACTIONS(150), 1,
      sym__line_end,
  [467] = 1,
    ACTIONS(152), 1,
      sym__line_end,
  [471] = 1,
    ACTIONS(154), 1,
      sym_text,
  [475] = 1,
    ACTIONS(63), 1,
      sym_text,
  [479] = 1,
    ACTIONS(156), 1,
      sym__line_end,
  [483] = 1,
    ACTIONS(158), 1,
      sym_text,
  [487] = 1,
    ACTIONS(160), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 16,
  [SMALL_STATE(4)] = 32,
  [SMALL_STATE(5)] = 48,
  [SMALL_STATE(6)] = 61,
  [SMALL_STATE(7)] = 72,
  [SMALL_STATE(8)] = 83,
  [SMALL_STATE(9)] = 94,
  [SMALL_STATE(10)] = 105,
  [SMALL_STATE(11)] = 116,
  [SMALL_STATE(12)] = 127,
  [SMALL_STATE(13)] = 138,
  [SMALL_STATE(14)] = 149,
  [SMALL_STATE(15)] = 160,
  [SMALL_STATE(16)] = 170,
  [SMALL_STATE(17)] = 180,
  [SMALL_STATE(18)] = 190,
  [SMALL_STATE(19)] = 200,
  [SMALL_STATE(20)] = 210,
  [SMALL_STATE(21)] = 220,
  [SMALL_STATE(22)] = 230,
  [SMALL_STATE(23)] = 237,
  [SMALL_STATE(24)] = 244,
  [SMALL_STATE(25)] = 249,
  [SMALL_STATE(26)] = 256,
  [SMALL_STATE(27)] = 263,
  [SMALL_STATE(28)] = 270,
  [SMALL_STATE(29)] = 275,
  [SMALL_STATE(30)] = 282,
  [SMALL_STATE(31)] = 287,
  [SMALL_STATE(32)] = 294,
  [SMALL_STATE(33)] = 299,
  [SMALL_STATE(34)] = 306,
  [SMALL_STATE(35)] = 311,
  [SMALL_STATE(36)] = 318,
  [SMALL_STATE(37)] = 323,
  [SMALL_STATE(38)] = 328,
  [SMALL_STATE(39)] = 333,
  [SMALL_STATE(40)] = 338,
  [SMALL_STATE(41)] = 343,
  [SMALL_STATE(42)] = 348,
  [SMALL_STATE(43)] = 353,
  [SMALL_STATE(44)] = 360,
  [SMALL_STATE(45)] = 365,
  [SMALL_STATE(46)] = 370,
  [SMALL_STATE(47)] = 375,
  [SMALL_STATE(48)] = 380,
  [SMALL_STATE(49)] = 385,
  [SMALL_STATE(50)] = 390,
  [SMALL_STATE(51)] = 397,
  [SMALL_STATE(52)] = 404,
  [SMALL_STATE(53)] = 411,
  [SMALL_STATE(54)] = 415,
  [SMALL_STATE(55)] = 419,
  [SMALL_STATE(56)] = 423,
  [SMALL_STATE(57)] = 427,
  [SMALL_STATE(58)] = 431,
  [SMALL_STATE(59)] = 435,
  [SMALL_STATE(60)] = 439,
  [SMALL_STATE(61)] = 443,
  [SMALL_STATE(62)] = 447,
  [SMALL_STATE(63)] = 451,
  [SMALL_STATE(64)] = 455,
  [SMALL_STATE(65)] = 459,
  [SMALL_STATE(66)] = 463,
  [SMALL_STATE(67)] = 467,
  [SMALL_STATE(68)] = 471,
  [SMALL_STATE(69)] = 475,
  [SMALL_STATE(70)] = 479,
  [SMALL_STATE(71)] = 483,
  [SMALL_STATE(72)] = 487,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4, 0, 1),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 5, 0, 3),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 6, 0, 5),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2, 0, 6),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 6, 0, 4),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_row_repeat1, 2, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 3, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line_blank, 2, 0, 0),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_row_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 7, 0, 7),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_row_repeat1, 3, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 3, 0, 8),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 4, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_row, 3, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_row, 4, 0, 9),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_row, 5, 0, 10),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_row, 6, 0, 11),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 5, 0, 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_row_repeat1, 4, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [160] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
    [ts_external_token__line_end] = true,
  },
  [4] = {
    [ts_external_token__line_start] = true,
    [ts_external_token__indent] = true,
  },
  [5] = {
    [ts_external_token__indent] = true,
    [ts_external_token__continue] = true,
    [ts_external_token__dedent] = true,
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
