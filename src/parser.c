#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 51
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 19
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 6
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 12

enum ts_symbol_identifiers {
  anon_sym_COLON = 1,
  sym_text = 2,
  sym_key_text = 3,
  sym__w = 4,
  sym__line_start = 5,
  sym__line_end = 6,
  sym__indent = 7,
  sym__current = 8,
  sym__dedent = 9,
  sym_error = 10,
  sym_source_file = 11,
  sym_model = 12,
  sym_section = 13,
  sym_body = 14,
  sym_struct_row = 15,
  sym__line_blank = 16,
  aux_sym_source_file_repeat1 = 17,
  aux_sym_body_repeat1 = 18,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COLON] = ":",
  [sym_text] = "text",
  [sym_key_text] = "text",
  [sym__w] = "_w",
  [sym__line_start] = "_line_start",
  [sym__line_end] = "_line_end",
  [sym__indent] = "_indent",
  [sym__current] = "_current",
  [sym__dedent] = "_dedent",
  [sym_error] = "error",
  [sym_source_file] = "source_file",
  [sym_model] = "model",
  [sym_section] = "section",
  [sym_body] = "body",
  [sym_struct_row] = "struct_row",
  [sym__line_blank] = "_line_blank",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_body_repeat1] = "body_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_text] = sym_text,
  [sym_key_text] = sym_text,
  [sym__w] = sym__w,
  [sym__line_start] = sym__line_start,
  [sym__line_end] = sym__line_end,
  [sym__indent] = sym__indent,
  [sym__current] = sym__current,
  [sym__dedent] = sym__dedent,
  [sym_error] = sym_error,
  [sym_source_file] = sym_source_file,
  [sym_model] = sym_model,
  [sym_section] = sym_section,
  [sym_body] = sym_body,
  [sym_struct_row] = sym_struct_row,
  [sym__line_blank] = sym__line_blank,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_body_repeat1] = aux_sym_body_repeat1,
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
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_key_text] = {
    .visible = true,
    .named = true,
  },
  [sym__w] = {
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
  [sym__current] = {
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
    {field_base, 1},
    {field_name, 3},
  [2] =
    {field_base, 1},
    {field_body, 5},
    {field_name, 3},
  [5] =
    {field_base, 1},
    {field_name, 4},
  [7] =
    {field_base, 1},
    {field_body, 6},
    {field_name, 4},
  [10] =
    {field_base, 1},
    {field_name, 5},
  [12] =
    {field_name, 0},
  [13] =
    {field_base, 1},
    {field_body, 7},
    {field_name, 5},
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
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 11,
  [16] = 13,
  [17] = 9,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 27,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 21,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(3);
      if (lookahead == '\r') SKIP(0);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 1:
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(10);
      END_STATE();
    case 2:
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(7);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_key_text);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(10);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_key_text);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_key_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym__w);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 0, .external_lex_state = 2},
  [3] = {.lex_state = 0, .external_lex_state = 2},
  [4] = {.lex_state = 0, .external_lex_state = 3},
  [5] = {.lex_state = 0, .external_lex_state = 3},
  [6] = {.lex_state = 0, .external_lex_state = 3},
  [7] = {.lex_state = 0, .external_lex_state = 4},
  [8] = {.lex_state = 1, .external_lex_state = 5},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 0, .external_lex_state = 5},
  [11] = {.lex_state = 0, .external_lex_state = 6},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 0, .external_lex_state = 6},
  [14] = {.lex_state = 0, .external_lex_state = 6},
  [15] = {.lex_state = 0, .external_lex_state = 6},
  [16] = {.lex_state = 0, .external_lex_state = 6},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 0, .external_lex_state = 2},
  [19] = {.lex_state = 0, .external_lex_state = 2},
  [20] = {.lex_state = 0, .external_lex_state = 2},
  [21] = {.lex_state = 0, .external_lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 0, .external_lex_state = 2},
  [26] = {.lex_state = 0, .external_lex_state = 6},
  [27] = {.lex_state = 0, .external_lex_state = 6},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 0, .external_lex_state = 6},
  [30] = {.lex_state = 0, .external_lex_state = 2},
  [31] = {.lex_state = 0, .external_lex_state = 2},
  [32] = {.lex_state = 0, .external_lex_state = 6},
  [33] = {.lex_state = 0, .external_lex_state = 6},
  [34] = {.lex_state = 0, .external_lex_state = 6},
  [35] = {.lex_state = 0, .external_lex_state = 6},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0, .external_lex_state = 5},
  [38] = {.lex_state = 0, .external_lex_state = 5},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 0, .external_lex_state = 5},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0, .external_lex_state = 5},
  [45] = {.lex_state = 0, .external_lex_state = 5},
  [46] = {.lex_state = 0, .external_lex_state = 5},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 0, .external_lex_state = 5},
  [50] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym__w] = ACTIONS(1),
    [sym__line_start] = ACTIONS(1),
    [sym__line_end] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__current] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
    [sym_error] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(39),
    [sym_model] = STATE(3),
    [sym__line_blank] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__line_start] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 1,
      sym__line_start,
    STATE(2), 3,
      sym_model,
      sym__line_blank,
      aux_sym_source_file_repeat1,
  [12] = 3,
    ACTIONS(5), 1,
      sym__line_start,
    ACTIONS(12), 1,
      ts_builtin_sym_end,
    STATE(2), 3,
      sym_model,
      sym__line_blank,
      aux_sym_source_file_repeat1,
  [24] = 3,
    ACTIONS(16), 1,
      sym__indent,
    STATE(18), 1,
      sym_body,
    ACTIONS(14), 2,
      sym__line_start,
      ts_builtin_sym_end,
  [35] = 3,
    ACTIONS(16), 1,
      sym__indent,
    STATE(19), 1,
      sym_body,
    ACTIONS(18), 2,
      sym__line_start,
      ts_builtin_sym_end,
  [46] = 3,
    ACTIONS(16), 1,
      sym__indent,
    STATE(25), 1,
      sym_body,
    ACTIONS(20), 2,
      sym__line_start,
      ts_builtin_sym_end,
  [57] = 3,
    ACTIONS(22), 1,
      sym__indent,
    STATE(26), 1,
      sym_body,
    ACTIONS(24), 2,
      sym__current,
      sym__dedent,
  [68] = 3,
    ACTIONS(26), 1,
      sym_key_text,
    ACTIONS(28), 1,
      sym__w,
    ACTIONS(30), 1,
      sym__line_end,
  [78] = 2,
    ACTIONS(32), 1,
      sym_key_text,
    STATE(11), 2,
      sym_section,
      sym_struct_row,
  [86] = 3,
    ACTIONS(34), 1,
      anon_sym_COLON,
    ACTIONS(36), 1,
      sym__w,
    ACTIONS(38), 1,
      sym__line_end,
  [96] = 3,
    ACTIONS(40), 1,
      sym__current,
    ACTIONS(42), 1,
      sym__dedent,
    STATE(13), 1,
      aux_sym_body_repeat1,
  [106] = 2,
    ACTIONS(32), 1,
      sym_key_text,
    STATE(29), 2,
      sym_section,
      sym_struct_row,
  [114] = 3,
    ACTIONS(40), 1,
      sym__current,
    ACTIONS(44), 1,
      sym__dedent,
    STATE(14), 1,
      aux_sym_body_repeat1,
  [124] = 3,
    ACTIONS(46), 1,
      sym__current,
    ACTIONS(49), 1,
      sym__dedent,
    STATE(14), 1,
      aux_sym_body_repeat1,
  [134] = 3,
    ACTIONS(40), 1,
      sym__current,
    ACTIONS(51), 1,
      sym__dedent,
    STATE(16), 1,
      aux_sym_body_repeat1,
  [144] = 3,
    ACTIONS(40), 1,
      sym__current,
    ACTIONS(53), 1,
      sym__dedent,
    STATE(14), 1,
      aux_sym_body_repeat1,
  [154] = 2,
    ACTIONS(32), 1,
      sym_key_text,
    STATE(15), 2,
      sym_section,
      sym_struct_row,
  [162] = 1,
    ACTIONS(55), 2,
      sym__line_start,
      ts_builtin_sym_end,
  [167] = 1,
    ACTIONS(57), 2,
      sym__line_start,
      ts_builtin_sym_end,
  [172] = 1,
    ACTIONS(59), 2,
      sym__line_start,
      ts_builtin_sym_end,
  [177] = 1,
    ACTIONS(61), 2,
      sym__line_start,
      ts_builtin_sym_end,
  [182] = 2,
    ACTIONS(63), 1,
      sym_text,
    ACTIONS(65), 1,
      sym__w,
  [189] = 2,
    ACTIONS(67), 1,
      sym_text,
    ACTIONS(69), 1,
      sym__w,
  [196] = 2,
    ACTIONS(71), 1,
      sym_text,
    ACTIONS(73), 1,
      sym__w,
  [203] = 1,
    ACTIONS(75), 2,
      sym__line_start,
      ts_builtin_sym_end,
  [208] = 1,
    ACTIONS(77), 2,
      sym__current,
      sym__dedent,
  [213] = 1,
    ACTIONS(79), 2,
      sym__current,
      sym__dedent,
  [218] = 2,
    ACTIONS(81), 1,
      sym_text,
    ACTIONS(83), 1,
      sym__w,
  [225] = 1,
    ACTIONS(49), 2,
      sym__current,
      sym__dedent,
  [230] = 1,
    ACTIONS(79), 2,
      sym__line_start,
      ts_builtin_sym_end,
  [235] = 1,
    ACTIONS(85), 2,
      sym__line_start,
      ts_builtin_sym_end,
  [240] = 1,
    ACTIONS(87), 2,
      sym__current,
      sym__dedent,
  [245] = 1,
    ACTIONS(89), 2,
      sym__current,
      sym__dedent,
  [250] = 1,
    ACTIONS(91), 2,
      sym__current,
      sym__dedent,
  [255] = 1,
    ACTIONS(61), 2,
      sym__current,
      sym__dedent,
  [260] = 2,
    ACTIONS(93), 1,
      anon_sym_COLON,
    ACTIONS(95), 1,
      sym__w,
  [267] = 1,
    ACTIONS(97), 1,
      sym__line_end,
  [271] = 1,
    ACTIONS(99), 1,
      sym__line_end,
  [275] = 1,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
  [279] = 1,
    ACTIONS(103), 1,
      anon_sym_COLON,
  [283] = 1,
    ACTIONS(63), 1,
      sym_text,
  [287] = 1,
    ACTIONS(105), 1,
      sym__line_end,
  [291] = 1,
    ACTIONS(107), 1,
      anon_sym_COLON,
  [295] = 1,
    ACTIONS(109), 1,
      sym__line_end,
  [299] = 1,
    ACTIONS(111), 1,
      sym__line_end,
  [303] = 1,
    ACTIONS(113), 1,
      sym__line_end,
  [307] = 1,
    ACTIONS(115), 1,
      sym_text,
  [311] = 1,
    ACTIONS(81), 1,
      sym_text,
  [315] = 1,
    ACTIONS(117), 1,
      sym__line_end,
  [319] = 1,
    ACTIONS(119), 1,
      sym_text,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 12,
  [SMALL_STATE(4)] = 24,
  [SMALL_STATE(5)] = 35,
  [SMALL_STATE(6)] = 46,
  [SMALL_STATE(7)] = 57,
  [SMALL_STATE(8)] = 68,
  [SMALL_STATE(9)] = 78,
  [SMALL_STATE(10)] = 86,
  [SMALL_STATE(11)] = 96,
  [SMALL_STATE(12)] = 106,
  [SMALL_STATE(13)] = 114,
  [SMALL_STATE(14)] = 124,
  [SMALL_STATE(15)] = 134,
  [SMALL_STATE(16)] = 144,
  [SMALL_STATE(17)] = 154,
  [SMALL_STATE(18)] = 162,
  [SMALL_STATE(19)] = 167,
  [SMALL_STATE(20)] = 172,
  [SMALL_STATE(21)] = 177,
  [SMALL_STATE(22)] = 182,
  [SMALL_STATE(23)] = 189,
  [SMALL_STATE(24)] = 196,
  [SMALL_STATE(25)] = 203,
  [SMALL_STATE(26)] = 208,
  [SMALL_STATE(27)] = 213,
  [SMALL_STATE(28)] = 218,
  [SMALL_STATE(29)] = 225,
  [SMALL_STATE(30)] = 230,
  [SMALL_STATE(31)] = 235,
  [SMALL_STATE(32)] = 240,
  [SMALL_STATE(33)] = 245,
  [SMALL_STATE(34)] = 250,
  [SMALL_STATE(35)] = 255,
  [SMALL_STATE(36)] = 260,
  [SMALL_STATE(37)] = 267,
  [SMALL_STATE(38)] = 271,
  [SMALL_STATE(39)] = 275,
  [SMALL_STATE(40)] = 279,
  [SMALL_STATE(41)] = 283,
  [SMALL_STATE(42)] = 287,
  [SMALL_STATE(43)] = 291,
  [SMALL_STATE(44)] = 295,
  [SMALL_STATE(45)] = 299,
  [SMALL_STATE(46)] = 303,
  [SMALL_STATE(47)] = 307,
  [SMALL_STATE(48)] = 311,
  [SMALL_STATE(49)] = 315,
  [SMALL_STATE(50)] = 319,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [9] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [12] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [14] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model, 6, 0, 3),
  [16] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [18] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model, 5, 0, 1),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model, 7, 0, 5),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2, 0, 6),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [28] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model, 7, 0, 4),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model, 6, 0, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line_blank, 3, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 3, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model, 8, 0, 7),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 3, 0, 8),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 4, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line_blank, 2, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_row, 4, 0, 9),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_row, 5, 0, 10),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_row, 6, 0, 11),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [101] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__line_start = 0,
  ts_external_token__line_end = 1,
  ts_external_token__indent = 2,
  ts_external_token__current = 3,
  ts_external_token__dedent = 4,
  ts_external_token_error = 5,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__line_start] = sym__line_start,
  [ts_external_token__line_end] = sym__line_end,
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__current] = sym__current,
  [ts_external_token__dedent] = sym__dedent,
  [ts_external_token_error] = sym_error,
};

static const bool ts_external_scanner_states[7][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__line_start] = true,
    [ts_external_token__line_end] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__current] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token_error] = true,
  },
  [2] = {
    [ts_external_token__line_start] = true,
  },
  [3] = {
    [ts_external_token__line_start] = true,
    [ts_external_token__indent] = true,
  },
  [4] = {
    [ts_external_token__indent] = true,
    [ts_external_token__current] = true,
    [ts_external_token__dedent] = true,
  },
  [5] = {
    [ts_external_token__line_end] = true,
  },
  [6] = {
    [ts_external_token__current] = true,
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
