#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 51
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 34
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

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
  anon_sym_true = 12,
  anon_sym_false = 13,
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
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
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
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
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
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '\r') SKIP(0)
      if (lookahead == '(') ADVANCE(38);
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == ',') ADVANCE(33);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == ':') ADVANCE(37);
      if (lookahead == ';') ADVANCE(34);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == 'C') ADVANCE(7);
      if (lookahead == 'I') ADVANCE(9);
      if (lookahead == 'O') ADVANCE(15);
      if (lookahead == 'P') ADVANCE(6);
      if (lookahead == '[') ADVANCE(25);
      if (lookahead == 'f') ADVANCE(17);
      if (lookahead == 't') ADVANCE(21);
      if (lookahead == '{') ADVANCE(30);
      if (lookahead == '}') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 1:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(48);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '/') ADVANCE(47);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == ']') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(26);
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
      if (lookahead == 'N') ADVANCE(32);
      END_STATE();
    case 10:
      if (lookahead == 'P') ADVANCE(29);
      END_STATE();
    case 11:
      if (lookahead == 'R') ADVANCE(14);
      END_STATE();
    case 12:
      if (lookahead == 'S') ADVANCE(36);
      END_STATE();
    case 13:
      if (lookahead == 'T') ADVANCE(35);
      END_STATE();
    case 14:
      if (lookahead == 'T') ADVANCE(12);
      END_STATE();
    case 15:
      if (lookahead == 'U') ADVANCE(13);
      END_STATE();
    case 16:
      if (lookahead == ']') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(41);
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
      if (lookahead == '}') ADVANCE(31);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 27:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(48);
      if (lookahead == '\r') ADVANCE(50);
      if (lookahead == '\\') ADVANCE(49);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_CHIP);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_IN);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_OUT);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_PARTS);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_bus_index);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_bus_slicing);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(48);
      if (lookahead == '\r') ADVANCE(50);
      if (lookahead == '\\') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(48);
      if (lookahead == '\\') ADVANCE(27);
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
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 24},
  [8] = {.lex_state = 24},
  [9] = {.lex_state = 24},
  [10] = {.lex_state = 24},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 24},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
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
  [25] = {.lex_state = 0},
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
  [36] = {.lex_state = 24},
  [37] = {.lex_state = 24},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 24},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 24},
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
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_bus_index] = ACTIONS(1),
    [sym_bus_slicing] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(49),
    [sym__definition] = STATE(4),
    [sym_chip_definition] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
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
    STATE(6), 1,
      sym_inputs,
    STATE(21), 1,
      sym_outputs,
    STATE(45), 1,
      sym_parts,
  [22] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 2,
      sym_bus_index,
      sym_bus_slicing,
    ACTIONS(15), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_EQ,
  [35] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_CHIP,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    STATE(5), 3,
      sym__definition,
      sym_chip_definition,
      aux_sym_source_file_repeat1,
  [50] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      anon_sym_CHIP,
    STATE(5), 3,
      sym__definition,
      sym_chip_definition,
      aux_sym_source_file_repeat1,
  [65] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_OUT,
    ACTIONS(13), 1,
      anon_sym_PARTS,
    STATE(29), 1,
      sym_outputs,
    STATE(42), 1,
      sym_parts,
  [81] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(26), 1,
      anon_sym_RBRACE,
    ACTIONS(28), 1,
      sym_identifier,
    STATE(8), 2,
      sym_part,
      aux_sym_parts_repeat1,
  [95] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(28), 1,
      sym_identifier,
    ACTIONS(30), 1,
      anon_sym_RBRACE,
    STATE(9), 2,
      sym_part,
      aux_sym_parts_repeat1,
  [109] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(32), 1,
      anon_sym_RBRACE,
    ACTIONS(34), 1,
      sym_identifier,
    STATE(9), 2,
      sym_part,
      aux_sym_parts_repeat1,
  [123] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      sym_identifier,
    STATE(28), 1,
      sym_expression,
    STATE(39), 1,
      sym_parameter,
  [136] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_COMMA,
    ACTIONS(42), 1,
      anon_sym_SEMI,
    STATE(11), 1,
      aux_sym_inputs_repeat1,
  [149] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      sym_identifier,
    STATE(14), 1,
      sym_expression,
    STATE(39), 1,
      sym_parameter,
  [162] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      anon_sym_COMMA,
    ACTIONS(47), 1,
      anon_sym_RPAREN,
    STATE(13), 1,
      aux_sym_part_repeat1,
  [175] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_COMMA,
    ACTIONS(51), 1,
      anon_sym_RPAREN,
    STATE(18), 1,
      aux_sym_part_repeat1,
  [188] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_COMMA,
    ACTIONS(55), 1,
      anon_sym_SEMI,
    STATE(11), 1,
      aux_sym_inputs_repeat1,
  [201] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_COMMA,
    ACTIONS(57), 1,
      anon_sym_SEMI,
    STATE(15), 1,
      aux_sym_inputs_repeat1,
  [214] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_COMMA,
    ACTIONS(59), 1,
      anon_sym_SEMI,
    STATE(19), 1,
      aux_sym_inputs_repeat1,
  [227] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_COMMA,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
    STATE(13), 1,
      aux_sym_part_repeat1,
  [240] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_COMMA,
    ACTIONS(63), 1,
      anon_sym_SEMI,
    STATE(11), 1,
      aux_sym_inputs_repeat1,
  [253] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_EQ,
  [262] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_PARTS,
    STATE(42), 1,
      sym_parts,
  [272] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 2,
      ts_builtin_sym_end,
      anon_sym_CHIP,
  [280] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 2,
      ts_builtin_sym_end,
      anon_sym_CHIP,
  [288] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      sym_identifier,
    STATE(32), 1,
      sym_parameter,
  [298] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 2,
      anon_sym_OUT,
      anon_sym_PARTS,
  [306] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [314] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [322] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [330] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_PARTS,
    STATE(46), 1,
      sym_parts,
  [340] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [348] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      anon_sym_CHIP,
  [356] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [364] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 2,
      anon_sym_OUT,
      anon_sym_PARTS,
  [372] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    STATE(35), 1,
      sym_block,
  [382] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 2,
      ts_builtin_sym_end,
      anon_sym_CHIP,
  [390] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      sym_identifier,
    STATE(16), 1,
      sym_parameter,
  [400] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      sym_identifier,
    STATE(17), 1,
      sym_parameter,
  [410] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_COLON,
  [417] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_EQ,
  [424] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_PARTS,
  [431] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_identifier,
  [438] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_RBRACE,
  [445] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_SEMI,
  [452] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_PARTS,
  [459] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_RBRACE,
  [466] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
  [473] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
  [480] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_SEMI,
  [487] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
  [494] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 35,
  [SMALL_STATE(5)] = 50,
  [SMALL_STATE(6)] = 65,
  [SMALL_STATE(7)] = 81,
  [SMALL_STATE(8)] = 95,
  [SMALL_STATE(9)] = 109,
  [SMALL_STATE(10)] = 123,
  [SMALL_STATE(11)] = 136,
  [SMALL_STATE(12)] = 149,
  [SMALL_STATE(13)] = 162,
  [SMALL_STATE(14)] = 175,
  [SMALL_STATE(15)] = 188,
  [SMALL_STATE(16)] = 201,
  [SMALL_STATE(17)] = 214,
  [SMALL_STATE(18)] = 227,
  [SMALL_STATE(19)] = 240,
  [SMALL_STATE(20)] = 253,
  [SMALL_STATE(21)] = 262,
  [SMALL_STATE(22)] = 272,
  [SMALL_STATE(23)] = 280,
  [SMALL_STATE(24)] = 288,
  [SMALL_STATE(25)] = 298,
  [SMALL_STATE(26)] = 306,
  [SMALL_STATE(27)] = 314,
  [SMALL_STATE(28)] = 322,
  [SMALL_STATE(29)] = 330,
  [SMALL_STATE(30)] = 340,
  [SMALL_STATE(31)] = 348,
  [SMALL_STATE(32)] = 356,
  [SMALL_STATE(33)] = 364,
  [SMALL_STATE(34)] = 372,
  [SMALL_STATE(35)] = 382,
  [SMALL_STATE(36)] = 390,
  [SMALL_STATE(37)] = 400,
  [SMALL_STATE(38)] = 410,
  [SMALL_STATE(39)] = 417,
  [SMALL_STATE(40)] = 424,
  [SMALL_STATE(41)] = 431,
  [SMALL_STATE(42)] = 438,
  [SMALL_STATE(43)] = 445,
  [SMALL_STATE(44)] = 452,
  [SMALL_STATE(45)] = 459,
  [SMALL_STATE(46)] = 466,
  [SMALL_STATE(47)] = 473,
  [SMALL_STATE(48)] = 480,
  [SMALL_STATE(49)] = 487,
  [SMALL_STATE(50)] = 494,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(50),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parts, 2),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parts, 3),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parts_repeat1, 2),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parts_repeat1, 2), SHIFT_REPEAT(47),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inputs_repeat1, 2), SHIFT_REPEAT(24),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inputs_repeat1, 2),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_part_repeat1, 2), SHIFT_REPEAT(10),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_part_repeat1, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 5),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inputs, 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 6),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 5),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inputs, 4),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chip_definition, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_outputs, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_outputs, 4),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [109] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
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
