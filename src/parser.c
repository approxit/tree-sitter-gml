#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 32
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 21
#define ALIAS_COUNT 0
#define TOKEN_COUNT 9
#define EXTERNAL_TOKEN_COUNT 4
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 6

enum ts_symbol_identifiers {
  anon_sym_COLON = 1,
  sym_text = 2,
  sym_model_text = 3,
  sym_struc_text = 4,
  sym__newline = 5,
  sym__indent = 6,
  sym__dedent = 7,
  sym__error = 8,
  sym_source_file = 9,
  sym_model_definition = 10,
  sym_model_body = 11,
  sym_body = 12,
  sym_section_definition = 13,
  sym_struct_definition = 14,
  sym_struct_body = 15,
  sym_struct_row = 16,
  aux_sym_source_file_repeat1 = 17,
  aux_sym_model_body_repeat1 = 18,
  aux_sym_body_repeat1 = 19,
  aux_sym_struct_body_repeat1 = 20,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COLON] = ":",
  [sym_text] = "text",
  [sym_model_text] = "text",
  [sym_struc_text] = "text",
  [sym__newline] = "_newline",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym__error] = "_error",
  [sym_source_file] = "source_file",
  [sym_model_definition] = "model_definition",
  [sym_model_body] = "body",
  [sym_body] = "body",
  [sym_section_definition] = "section_definition",
  [sym_struct_definition] = "struct_definition",
  [sym_struct_body] = "body",
  [sym_struct_row] = "struct_row",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_model_body_repeat1] = "model_body_repeat1",
  [aux_sym_body_repeat1] = "body_repeat1",
  [aux_sym_struct_body_repeat1] = "struct_body_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_text] = sym_text,
  [sym_model_text] = sym_text,
  [sym_struc_text] = sym_text,
  [sym__newline] = sym__newline,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym__error] = sym__error,
  [sym_source_file] = sym_source_file,
  [sym_model_definition] = sym_model_definition,
  [sym_model_body] = sym_body,
  [sym_body] = sym_body,
  [sym_section_definition] = sym_section_definition,
  [sym_struct_definition] = sym_struct_definition,
  [sym_struct_body] = sym_body,
  [sym_struct_row] = sym_struct_row,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_model_body_repeat1] = aux_sym_model_body_repeat1,
  [aux_sym_body_repeat1] = aux_sym_body_repeat1,
  [aux_sym_struct_body_repeat1] = aux_sym_struct_body_repeat1,
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
  [sym_model_text] = {
    .visible = true,
    .named = true,
  },
  [sym_struc_text] = {
    .visible = true,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym__indent] = {
    .visible = false,
    .named = true,
  },
  [sym__dedent] = {
    .visible = false,
    .named = true,
  },
  [sym__error] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_model_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_model_body] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym_section_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_body] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_row] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_model_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_struct_body_repeat1] = {
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
    {field_base, 0},
    {field_name, 2},
  [2] =
    {field_base, 0},
    {field_body, 4},
    {field_name, 2},
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
  [15] = 15,
  [16] = 16,
  [17] = 17,
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
  [30] = 30,
  [31] = 31,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      if (lookahead == ':') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 2:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 3:
      if (eof) ADVANCE(4);
      if (lookahead == '\n') SKIP(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(10);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(8);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_model_text);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ':') ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_model_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_struc_text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 3},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1, .external_lex_state = 2},
  [4] = {.lex_state = 1, .external_lex_state = 3},
  [5] = {.lex_state = 1, .external_lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3, .external_lex_state = 4},
  [9] = {.lex_state = 1, .external_lex_state = 3},
  [10] = {.lex_state = 1, .external_lex_state = 2},
  [11] = {.lex_state = 1, .external_lex_state = 3},
  [12] = {.lex_state = 0, .external_lex_state = 3},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 0, .external_lex_state = 3},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 1, .external_lex_state = 3},
  [19] = {.lex_state = 1, .external_lex_state = 3},
  [20] = {.lex_state = 1, .external_lex_state = 3},
  [21] = {.lex_state = 1, .external_lex_state = 3},
  [22] = {.lex_state = 0, .external_lex_state = 3},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0, .external_lex_state = 5},
  [27] = {.lex_state = 0, .external_lex_state = 5},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0, .external_lex_state = 5},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 0, .external_lex_state = 5},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_struc_text] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
    [sym__error] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(23),
    [sym_model_definition] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [sym_model_text] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(5), 1,
      sym_text,
    ACTIONS(7), 1,
      sym_struc_text,
    STATE(12), 2,
      sym_struct_row,
      aux_sym_struct_body_repeat1,
    STATE(5), 3,
      sym_section_definition,
      sym_struct_definition,
      aux_sym_body_repeat1,
  [16] = 4,
    ACTIONS(12), 1,
      sym__indent,
    STATE(20), 1,
      sym_struct_body,
    STATE(21), 1,
      sym_body,
    ACTIONS(9), 2,
      sym__dedent,
      sym_text,
  [30] = 3,
    ACTIONS(14), 1,
      sym_text,
    ACTIONS(17), 1,
      sym__dedent,
    STATE(4), 3,
      sym_section_definition,
      sym_struct_definition,
      aux_sym_body_repeat1,
  [42] = 3,
    ACTIONS(5), 1,
      sym_text,
    ACTIONS(19), 1,
      sym__dedent,
    STATE(4), 3,
      sym_section_definition,
      sym_struct_definition,
      aux_sym_body_repeat1,
  [54] = 3,
    ACTIONS(3), 1,
      sym_model_text,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    STATE(7), 2,
      sym_model_definition,
      aux_sym_source_file_repeat1,
  [65] = 3,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      sym_model_text,
    STATE(7), 2,
      sym_model_definition,
      aux_sym_source_file_repeat1,
  [76] = 3,
    ACTIONS(30), 1,
      sym__indent,
    STATE(16), 1,
      sym_model_body,
    ACTIONS(28), 2,
      ts_builtin_sym_end,
      sym_model_text,
  [87] = 3,
    ACTIONS(32), 1,
      sym_text,
    ACTIONS(34), 1,
      sym__dedent,
    STATE(11), 2,
      sym_section_definition,
      aux_sym_model_body_repeat1,
  [98] = 3,
    ACTIONS(38), 1,
      sym__indent,
    STATE(21), 1,
      sym_body,
    ACTIONS(36), 2,
      sym__dedent,
      sym_text,
  [109] = 3,
    ACTIONS(40), 1,
      sym_text,
    ACTIONS(43), 1,
      sym__dedent,
    STATE(11), 2,
      sym_section_definition,
      aux_sym_model_body_repeat1,
  [120] = 3,
    ACTIONS(45), 1,
      sym_struc_text,
    ACTIONS(47), 1,
      sym__dedent,
    STATE(14), 2,
      sym_struct_row,
      aux_sym_struct_body_repeat1,
  [131] = 2,
    ACTIONS(5), 1,
      sym_text,
    STATE(5), 3,
      sym_section_definition,
      sym_struct_definition,
      aux_sym_body_repeat1,
  [140] = 3,
    ACTIONS(49), 1,
      sym_struc_text,
    ACTIONS(52), 1,
      sym__dedent,
    STATE(14), 2,
      sym_struct_row,
      aux_sym_struct_body_repeat1,
  [151] = 2,
    ACTIONS(32), 1,
      sym_text,
    STATE(9), 2,
      sym_section_definition,
      aux_sym_model_body_repeat1,
  [159] = 1,
    ACTIONS(54), 2,
      ts_builtin_sym_end,
      sym_model_text,
  [164] = 1,
    ACTIONS(56), 2,
      ts_builtin_sym_end,
      sym_model_text,
  [169] = 1,
    ACTIONS(58), 2,
      sym__dedent,
      sym_text,
  [174] = 1,
    ACTIONS(60), 2,
      sym__dedent,
      sym_text,
  [179] = 1,
    ACTIONS(62), 2,
      sym__dedent,
      sym_text,
  [184] = 1,
    ACTIONS(64), 2,
      sym__dedent,
      sym_text,
  [189] = 1,
    ACTIONS(66), 2,
      sym__dedent,
      sym_struc_text,
  [194] = 1,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
  [198] = 1,
    ACTIONS(70), 1,
      sym_text,
  [202] = 1,
    ACTIONS(72), 1,
      anon_sym_COLON,
  [206] = 1,
    ACTIONS(74), 1,
      sym__newline,
  [210] = 1,
    ACTIONS(76), 1,
      sym__newline,
  [214] = 1,
    ACTIONS(78), 1,
      anon_sym_COLON,
  [218] = 1,
    ACTIONS(80), 1,
      sym__newline,
  [222] = 1,
    ACTIONS(82), 1,
      sym_text,
  [226] = 1,
    ACTIONS(84), 1,
      sym__newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 16,
  [SMALL_STATE(4)] = 30,
  [SMALL_STATE(5)] = 42,
  [SMALL_STATE(6)] = 54,
  [SMALL_STATE(7)] = 65,
  [SMALL_STATE(8)] = 76,
  [SMALL_STATE(9)] = 87,
  [SMALL_STATE(10)] = 98,
  [SMALL_STATE(11)] = 109,
  [SMALL_STATE(12)] = 120,
  [SMALL_STATE(13)] = 131,
  [SMALL_STATE(14)] = 140,
  [SMALL_STATE(15)] = 151,
  [SMALL_STATE(16)] = 159,
  [SMALL_STATE(17)] = 164,
  [SMALL_STATE(18)] = 169,
  [SMALL_STATE(19)] = 174,
  [SMALL_STATE(20)] = 179,
  [SMALL_STATE(21)] = 184,
  [SMALL_STATE(22)] = 189,
  [SMALL_STATE(23)] = 194,
  [SMALL_STATE(24)] = 198,
  [SMALL_STATE(25)] = 202,
  [SMALL_STATE(26)] = 206,
  [SMALL_STATE(27)] = 210,
  [SMALL_STATE(28)] = 214,
  [SMALL_STATE(29)] = 218,
  [SMALL_STATE(30)] = 222,
  [SMALL_STATE(31)] = 226,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [9] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_section_definition, 2, 0, 3), REDUCE(sym_struct_definition, 2, 0, 3),
  [12] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [14] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_definition, 4, 0, 1),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_definition, 2, 0, 3),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_model_body_repeat1, 2, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_definition, 5, 0, 2),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_body, 3, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 3, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 3, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 3, 0, 4),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_definition, 3, 0, 4),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_row, 4, 0, 5),
  [68] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__newline = 0,
  ts_external_token__indent = 1,
  ts_external_token__dedent = 2,
  ts_external_token__error = 3,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__newline] = sym__newline,
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__dedent] = sym__dedent,
  [ts_external_token__error] = sym__error,
};

static const bool ts_external_scanner_states[6][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__newline] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__error] = true,
  },
  [2] = {
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
  },
  [3] = {
    [ts_external_token__dedent] = true,
  },
  [4] = {
    [ts_external_token__indent] = true,
  },
  [5] = {
    [ts_external_token__newline] = true,
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
