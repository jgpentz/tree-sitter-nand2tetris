#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 52
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 34
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 6

enum {
  anon_sym_CHIP = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_IN = 4,
  anon_sym_COMMA = 5,
  anon_sym_SEMI = 6,
  anon_sym_OUT = 7,
  anon_sym_PARTS = 8,
  anon_sym_COLON = 9,
  anon_sym_LPAREN = 10,
  anon_sym_RPAREN = 11,
  sym_true = 12,
  sym_false = 13,
  anon_sym_EQ = 14,
  sym_identifier = 15,
  sym_number = 16,
  sym_bus_index = 17,
  sym_bus_slicing = 18,
  sym_comment = 19,
  sym_source_file = 20,
  sym__definition = 21,
  sym_chip_definition = 22,
  sym_block = 23,
  sym_inputs = 24,
  sym_outputs = 25,
  sym_parts = 26,
  sym_part = 27,
  sym_parameter = 28,
  sym_expression = 29,
  aux_sym_source_file_repeat1 = 30,
  aux_sym_inputs_repeat1 = 31,
  aux_sym_parts_repeat1 = 32,
  aux_sym_part_repeat1 = 33,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_CHIP] = "CHIP",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_IN] = "IN",
  [anon_sym_COMMA] = ",",
  [anon_sym_SEMI] = ";",
  [anon_sym_OUT] = "OUT",
  [anon_sym_PARTS] = "PARTS",
  [anon_sym_COLON] = ":",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_true] = "true",
  [sym_false] = "false",
  [anon_sym_EQ] = "=",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_bus_index] = "bus_index",
  [sym_bus_slicing] = "bus_slicing",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_chip_definition] = "chip_definition",
  [sym_block] = "block",
  [sym_inputs] = "inputs",
  [sym_outputs] = "outputs",
  [sym_parts] = "parts",
  [sym_part] = "part",
  [sym_parameter] = "parameter",
  [sym_expression] = "expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_inputs_repeat1] = "inputs_repeat1",
  [aux_sym_parts_repeat1] = "parts_repeat1",
  [aux_sym_part_repeat1] = "part_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_CHIP] = anon_sym_CHIP,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_IN] = anon_sym_IN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_OUT] = anon_sym_OUT,
  [anon_sym_PARTS] = anon_sym_PARTS,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [sym_bus_index] = sym_bus_index,
  [sym_bus_slicing] = sym_bus_slicing,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_chip_definition] = sym_chip_definition,
  [sym_block] = sym_block,
  [sym_inputs] = sym_inputs,
  [sym_outputs] = sym_outputs,
  [sym_parts] = sym_parts,
  [sym_part] = sym_part,
  [sym_parameter] = sym_parameter,
  [sym_expression] = sym_expression,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_inputs_repeat1] = aux_sym_inputs_repeat1,
  [aux_sym_parts_repeat1] = aux_sym_parts_repeat1,
  [aux_sym_part_repeat1] = aux_sym_part_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_CHIP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OUT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PARTS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_bus_index] = {
    .visible = true,
    .named = true,
  },
  [sym_bus_slicing] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_chip_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_inputs] = {
    .visible = true,
    .named = true,
  },
  [sym_outputs] = {
    .visible = true,
    .named = true,
  },
  [sym_parts] = {
    .visible = true,
    .named = true,
  },
  [sym_part] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_inputs_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parts_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_part_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_bus_index = 1,
  field_bus_slicing = 2,
  field_left = 3,
  field_name = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_bus_index] = "bus_index",
  [field_bus_slicing] = "bus_slicing",
  [field_left] = "left",
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_bus_index, 1},
  [2] =
    {field_bus_slicing, 1},
  [3] =
    {field_left, 0},
  [4] =
    {field_name, 0},
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
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '\r') SKIP(0)
      if (lookahead == '(') ADVANCE(39);
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == ',') ADVANCE(34);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == ':') ADVANCE(38);
      if (lookahead == ';') ADVANCE(35);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == 'C') ADVANCE(7);
      if (lookahead == 'I') ADVANCE(9);
      if (lookahead == 'O') ADVANCE(15);
      if (lookahead == 'P') ADVANCE(6);
      if (lookahead == '[') ADVANCE(26);
      if (lookahead == 'f') ADVANCE(17);
      if (lookahead == 't') ADVANCE(21);
      if (lookahead == '{') ADVANCE(31);
      if (lookahead == '}') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 1:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(58);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '/') ADVANCE(57);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == ']') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(27);
      END_STATE();
    case 6:
      if (lookahead == 'A') ADVANCE(11);
      END_STATE();
    case 7:
      if (lookahead == 'H') ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == 'I') ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == 'N') ADVANCE(33);
      END_STATE();
    case 10:
      if (lookahead == 'P') ADVANCE(30);
      END_STATE();
    case 11:
      if (lookahead == 'R') ADVANCE(14);
      END_STATE();
    case 12:
      if (lookahead == 'S') ADVANCE(37);
      END_STATE();
    case 13:
      if (lookahead == 'T') ADVANCE(36);
      END_STATE();
    case 14:
      if (lookahead == 'T') ADVANCE(12);
      END_STATE();
    case 15:
      if (lookahead == 'U') ADVANCE(13);
      END_STATE();
    case 16:
      if (lookahead == ']') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 21:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 22:
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 23:
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 24:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(24)
      if (lookahead == '\r') SKIP(24)
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == '}') ADVANCE(32);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 25:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(25)
      if (lookahead == '\r') SKIP(25)
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(46);
      if (lookahead == 't') ADVANCE(50);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 28:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(58);
      if (lookahead == '\r') ADVANCE(60);
      if (lookahead == '\\') ADVANCE(59);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_CHIP);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_IN);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_OUT);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_PARTS);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_true);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_false);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(49);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(42);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(44);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(51);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(52);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(48);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(47);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_bus_index);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_bus_slicing);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(58);
      if (lookahead == '\r') ADVANCE(60);
      if (lookahead == '\\') ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(28);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 24},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 24},
  [9] = {.lex_state = 24},
  [10] = {.lex_state = 24},
  [11] = {.lex_state = 25},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 24},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 24},
  [25] = {.lex_state = 24},
  [26] = {.lex_state = 24},
  [27] = {.lex_state = 24},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 24},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 24},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_CHIP] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_IN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_OUT] = ACTIONS(1),
    [anon_sym_PARTS] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_bus_index] = ACTIONS(1),
    [sym_bus_slicing] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(50),
    [sym__definition] = STATE(5),
    [sym_chip_definition] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_CHIP] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_IN,
    ACTIONS(11), 1,
      anon_sym_OUT,
    ACTIONS(13), 1,
      anon_sym_PARTS,
    STATE(7), 1,
      sym_inputs,
    STATE(37), 1,
      sym_outputs,
    STATE(46), 1,
      sym_parts,
  [22] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      anon_sym_CHIP,
    STATE(3), 3,
      sym__definition,
      sym_chip_definition,
      aux_sym_source_file_repeat1,
  [37] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(22), 1,
      sym_bus_index,
    ACTIONS(24), 1,
      sym_bus_slicing,
    ACTIONS(20), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_EQ,
  [52] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_CHIP,
    ACTIONS(26), 1,
      ts_builtin_sym_end,
    STATE(3), 3,
      sym__definition,
      sym_chip_definition,
      aux_sym_source_file_repeat1,
  [67] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(28), 1,
      anon_sym_RBRACE,
    ACTIONS(30), 1,
      sym_identifier,
    STATE(6), 2,
      sym_part,
      aux_sym_parts_repeat1,
  [81] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_OUT,
    ACTIONS(13), 1,
      anon_sym_PARTS,
    STATE(30), 1,
      sym_outputs,
    STATE(48), 1,
      sym_parts,
  [97] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(6), 2,
      sym_part,
      aux_sym_parts_repeat1,
  [111] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    STATE(8), 2,
      sym_part,
      aux_sym_parts_repeat1,
  [125] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_identifier,
    STATE(28), 1,
      sym_expression,
    STATE(41), 1,
      sym_parameter,
  [138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 3,
      sym_true,
      sym_false,
      sym_identifier,
  [147] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_COMMA,
    ACTIONS(45), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      aux_sym_part_repeat1,
  [160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_EQ,
  [169] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_identifier,
    STATE(12), 1,
      sym_expression,
    STATE(41), 1,
      sym_parameter,
  [182] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_COMMA,
    ACTIONS(52), 1,
      anon_sym_SEMI,
    STATE(15), 1,
      aux_sym_inputs_repeat1,
  [195] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 1,
      anon_sym_COMMA,
    ACTIONS(57), 1,
      anon_sym_RPAREN,
    STATE(16), 1,
      aux_sym_part_repeat1,
  [208] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_COMMA,
    ACTIONS(61), 1,
      anon_sym_SEMI,
    STATE(20), 1,
      aux_sym_inputs_repeat1,
  [221] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_COMMA,
    ACTIONS(63), 1,
      anon_sym_SEMI,
    STATE(19), 1,
      aux_sym_inputs_repeat1,
  [234] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_COMMA,
    ACTIONS(65), 1,
      anon_sym_SEMI,
    STATE(15), 1,
      aux_sym_inputs_repeat1,
  [247] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_COMMA,
    ACTIONS(67), 1,
      anon_sym_SEMI,
    STATE(15), 1,
      aux_sym_inputs_repeat1,
  [260] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_COMMA,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    STATE(16), 1,
      aux_sym_part_repeat1,
  [273] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_EQ,
  [282] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 2,
      anon_sym_OUT,
      anon_sym_PARTS,
  [290] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_identifier,
    STATE(18), 1,
      sym_parameter,
  [300] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_identifier,
    STATE(33), 1,
      sym_parameter,
  [310] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [318] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [326] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [334] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [342] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_PARTS,
    STATE(40), 1,
      sym_parts,
  [352] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      anon_sym_CHIP,
  [360] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 2,
      ts_builtin_sym_end,
      anon_sym_CHIP,
  [368] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [376] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 2,
      anon_sym_OUT,
      anon_sym_PARTS,
  [384] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_LBRACE,
    STATE(36), 1,
      sym_block,
  [394] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 2,
      ts_builtin_sym_end,
      anon_sym_CHIP,
  [402] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_PARTS,
    STATE(48), 1,
      sym_parts,
  [412] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_identifier,
    STATE(17), 1,
      sym_parameter,
  [422] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 2,
      ts_builtin_sym_end,
      anon_sym_CHIP,
  [430] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_RBRACE,
  [437] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_EQ,
  [444] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      sym_identifier,
  [451] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_COLON,
  [458] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_SEMI,
  [465] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      anon_sym_PARTS,
  [472] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_RBRACE,
  [479] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
  [486] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_RBRACE,
  [493] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_SEMI,
  [500] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      ts_builtin_sym_end,
  [507] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_PARTS,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 37,
  [SMALL_STATE(5)] = 52,
  [SMALL_STATE(6)] = 67,
  [SMALL_STATE(7)] = 81,
  [SMALL_STATE(8)] = 97,
  [SMALL_STATE(9)] = 111,
  [SMALL_STATE(10)] = 125,
  [SMALL_STATE(11)] = 138,
  [SMALL_STATE(12)] = 147,
  [SMALL_STATE(13)] = 160,
  [SMALL_STATE(14)] = 169,
  [SMALL_STATE(15)] = 182,
  [SMALL_STATE(16)] = 195,
  [SMALL_STATE(17)] = 208,
  [SMALL_STATE(18)] = 221,
  [SMALL_STATE(19)] = 234,
  [SMALL_STATE(20)] = 247,
  [SMALL_STATE(21)] = 260,
  [SMALL_STATE(22)] = 273,
  [SMALL_STATE(23)] = 282,
  [SMALL_STATE(24)] = 290,
  [SMALL_STATE(25)] = 300,
  [SMALL_STATE(26)] = 310,
  [SMALL_STATE(27)] = 318,
  [SMALL_STATE(28)] = 326,
  [SMALL_STATE(29)] = 334,
  [SMALL_STATE(30)] = 342,
  [SMALL_STATE(31)] = 352,
  [SMALL_STATE(32)] = 360,
  [SMALL_STATE(33)] = 368,
  [SMALL_STATE(34)] = 376,
  [SMALL_STATE(35)] = 384,
  [SMALL_STATE(36)] = 394,
  [SMALL_STATE(37)] = 402,
  [SMALL_STATE(38)] = 412,
  [SMALL_STATE(39)] = 422,
  [SMALL_STATE(40)] = 430,
  [SMALL_STATE(41)] = 437,
  [SMALL_STATE(42)] = 444,
  [SMALL_STATE(43)] = 451,
  [SMALL_STATE(44)] = 458,
  [SMALL_STATE(45)] = 465,
  [SMALL_STATE(46)] = 472,
  [SMALL_STATE(47)] = 479,
  [SMALL_STATE(48)] = 486,
  [SMALL_STATE(49)] = 493,
  [SMALL_STATE(50)] = 500,
  [SMALL_STATE(51)] = 507,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(42),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parts_repeat1, 2),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parts_repeat1, 2), SHIFT_REPEAT(47),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parts, 3),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parts, 2),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 3),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inputs_repeat1, 2), SHIFT_REPEAT(25),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inputs_repeat1, 2),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_part_repeat1, 2), SHIFT_REPEAT(10),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_part_repeat1, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inputs, 3),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 6, .production_id = 5),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 5, .production_id = 5),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3, .production_id = 4),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inputs, 4),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chip_definition, 3, .production_id = 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 5),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_outputs, 4),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [113] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_outputs, 3),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_hackhdl(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
