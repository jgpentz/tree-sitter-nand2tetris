#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 32
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 64
#define ALIAS_COUNT 0
#define TOKEN_COUNT 52
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_LPAREN = 1,
  anon_sym_RPAREN = 2,
  anon_sym_AT = 3,
  anon_sym_EQ = 4,
  anon_sym_DASH = 5,
  anon_sym_BANG = 6,
  anon_sym_PLUS = 7,
  anon_sym_AMP = 8,
  anon_sym_PIPE = 9,
  anon_sym_SEMI = 10,
  anon_sym_null = 11,
  anon_sym_M = 12,
  anon_sym_D = 13,
  anon_sym_A = 14,
  anon_sym_MD = 15,
  anon_sym_AM = 16,
  anon_sym_AD = 17,
  anon_sym_AMD = 18,
  anon_sym_JGT = 19,
  anon_sym_JLE = 20,
  anon_sym_JEQ = 21,
  anon_sym_JLT = 22,
  anon_sym_JNE = 23,
  anon_sym_JMP = 24,
  anon_sym_JGE = 25,
  anon_sym_R0 = 26,
  anon_sym_R1 = 27,
  anon_sym_R2 = 28,
  anon_sym_R3 = 29,
  anon_sym_R4 = 30,
  anon_sym_R5 = 31,
  anon_sym_R6 = 32,
  anon_sym_R7 = 33,
  anon_sym_R8 = 34,
  anon_sym_R9 = 35,
  anon_sym_R10 = 36,
  anon_sym_R11 = 37,
  anon_sym_R12 = 38,
  anon_sym_R13 = 39,
  anon_sym_R14 = 40,
  anon_sym_R15 = 41,
  anon_sym_SP = 42,
  anon_sym_LCL = 43,
  anon_sym_ARG = 44,
  anon_sym_THIS = 45,
  anon_sym_THAT = 46,
  anon_sym_SCREEN = 47,
  anon_sym_KBD = 48,
  sym_identifier = 49,
  sym_number = 50,
  sym_comment = 51,
  sym_source_file = 52,
  sym__definition = 53,
  sym_label = 54,
  sym_c_instruction = 55,
  sym__expression = 56,
  sym_unary_expression = 57,
  sym_binary_expression = 58,
  sym_jump_expression = 59,
  sym_builtin_regs = 60,
  sym_conditionals = 61,
  sym_builtin_symbols = 62,
  aux_sym_source_file_repeat1 = 63,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_AT] = "@",
  [anon_sym_EQ] = "=",
  [anon_sym_DASH] = "-",
  [anon_sym_BANG] = "!",
  [anon_sym_PLUS] = "+",
  [anon_sym_AMP] = "&",
  [anon_sym_PIPE] = "|",
  [anon_sym_SEMI] = ";",
  [anon_sym_null] = "null",
  [anon_sym_M] = "M",
  [anon_sym_D] = "D",
  [anon_sym_A] = "A",
  [anon_sym_MD] = "MD",
  [anon_sym_AM] = "AM",
  [anon_sym_AD] = "AD",
  [anon_sym_AMD] = "AMD",
  [anon_sym_JGT] = "JGT",
  [anon_sym_JLE] = "JLE",
  [anon_sym_JEQ] = "JEQ",
  [anon_sym_JLT] = "JLT",
  [anon_sym_JNE] = "JNE",
  [anon_sym_JMP] = "JMP",
  [anon_sym_JGE] = "JGE",
  [anon_sym_R0] = "R0",
  [anon_sym_R1] = "R1",
  [anon_sym_R2] = "R2",
  [anon_sym_R3] = "R3",
  [anon_sym_R4] = "R4",
  [anon_sym_R5] = "R5",
  [anon_sym_R6] = "R6",
  [anon_sym_R7] = "R7",
  [anon_sym_R8] = "R8",
  [anon_sym_R9] = "R9",
  [anon_sym_R10] = "R10",
  [anon_sym_R11] = "R11",
  [anon_sym_R12] = "R12",
  [anon_sym_R13] = "R13",
  [anon_sym_R14] = "R14",
  [anon_sym_R15] = "R15",
  [anon_sym_SP] = "SP",
  [anon_sym_LCL] = "LCL",
  [anon_sym_ARG] = "ARG",
  [anon_sym_THIS] = "THIS",
  [anon_sym_THAT] = "THAT",
  [anon_sym_SCREEN] = "SCREEN",
  [anon_sym_KBD] = "KBD",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_label] = "label",
  [sym_c_instruction] = "c_instruction",
  [sym__expression] = "_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_jump_expression] = "jump_expression",
  [sym_builtin_regs] = "builtin_regs",
  [sym_conditionals] = "conditionals",
  [sym_builtin_symbols] = "builtin_symbols",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_M] = anon_sym_M,
  [anon_sym_D] = anon_sym_D,
  [anon_sym_A] = anon_sym_A,
  [anon_sym_MD] = anon_sym_MD,
  [anon_sym_AM] = anon_sym_AM,
  [anon_sym_AD] = anon_sym_AD,
  [anon_sym_AMD] = anon_sym_AMD,
  [anon_sym_JGT] = anon_sym_JGT,
  [anon_sym_JLE] = anon_sym_JLE,
  [anon_sym_JEQ] = anon_sym_JEQ,
  [anon_sym_JLT] = anon_sym_JLT,
  [anon_sym_JNE] = anon_sym_JNE,
  [anon_sym_JMP] = anon_sym_JMP,
  [anon_sym_JGE] = anon_sym_JGE,
  [anon_sym_R0] = anon_sym_R0,
  [anon_sym_R1] = anon_sym_R1,
  [anon_sym_R2] = anon_sym_R2,
  [anon_sym_R3] = anon_sym_R3,
  [anon_sym_R4] = anon_sym_R4,
  [anon_sym_R5] = anon_sym_R5,
  [anon_sym_R6] = anon_sym_R6,
  [anon_sym_R7] = anon_sym_R7,
  [anon_sym_R8] = anon_sym_R8,
  [anon_sym_R9] = anon_sym_R9,
  [anon_sym_R10] = anon_sym_R10,
  [anon_sym_R11] = anon_sym_R11,
  [anon_sym_R12] = anon_sym_R12,
  [anon_sym_R13] = anon_sym_R13,
  [anon_sym_R14] = anon_sym_R14,
  [anon_sym_R15] = anon_sym_R15,
  [anon_sym_SP] = anon_sym_SP,
  [anon_sym_LCL] = anon_sym_LCL,
  [anon_sym_ARG] = anon_sym_ARG,
  [anon_sym_THIS] = anon_sym_THIS,
  [anon_sym_THAT] = anon_sym_THAT,
  [anon_sym_SCREEN] = anon_sym_SCREEN,
  [anon_sym_KBD] = anon_sym_KBD,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_label] = sym_label,
  [sym_c_instruction] = sym_c_instruction,
  [sym__expression] = sym__expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_jump_expression] = sym_jump_expression,
  [sym_builtin_regs] = sym_builtin_regs,
  [sym_conditionals] = sym_conditionals,
  [sym_builtin_symbols] = sym_builtin_symbols,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_M] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_D] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_A] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_JGT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_JLE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_JEQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_JLT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_JNE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_JMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_JGE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_R0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_R1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_R2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_R3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_R4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_R5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_R6] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_R7] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_R8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_R9] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_R10] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_R11] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_R12] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_R13] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_R14] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_R15] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LCL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ARG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_THIS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_THAT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SCREEN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_KBD] = {
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
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_c_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_jump_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_builtin_regs] = {
    .visible = true,
    .named = true,
  },
  [sym_conditionals] = {
    .visible = true,
    .named = true,
  },
  [sym_builtin_symbols] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_label_name = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_label_name] = "label_name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_label_name, 1},
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
      if (eof) ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '\r') SKIP(0)
      if (lookahead == '!') ADVANCE(38);
      if (lookahead == '&') ADVANCE(40);
      if (lookahead == '(') ADVANCE(33);
      if (lookahead == ')') ADVANCE(34);
      if (lookahead == '+') ADVANCE(39);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == ';') ADVANCE(42);
      if (lookahead == '=') ADVANCE(36);
      if (lookahead == '@') ADVANCE(35);
      if (lookahead == 'A') ADVANCE(47);
      if (lookahead == 'D') ADVANCE(45);
      if (lookahead == 'J') ADVANCE(10);
      if (lookahead == 'K') ADVANCE(6);
      if (lookahead == 'L') ADVANCE(7);
      if (lookahead == 'M') ADVANCE(44);
      if (lookahead == 'R') ADVANCE(4);
      if (lookahead == 'S') ADVANCE(8);
      if (lookahead == 'T') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(27);
      if (lookahead == '|') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 1:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(125);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '/') ADVANCE(124);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '0') ADVANCE(59);
      if (lookahead == '1') ADVANCE(61);
      if (lookahead == '2') ADVANCE(63);
      if (lookahead == '3') ADVANCE(65);
      if (lookahead == '4') ADVANCE(67);
      if (lookahead == '5') ADVANCE(69);
      if (lookahead == '6') ADVANCE(71);
      if (lookahead == '7') ADVANCE(73);
      if (lookahead == '8') ADVANCE(75);
      if (lookahead == '9') ADVANCE(77);
      END_STATE();
    case 5:
      if (lookahead == 'A') ADVANCE(24);
      if (lookahead == 'I') ADVANCE(23);
      END_STATE();
    case 6:
      if (lookahead == 'B') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == 'C') ADVANCE(18);
      END_STATE();
    case 8:
      if (lookahead == 'C') ADVANCE(22);
      if (lookahead == 'P') ADVANCE(91);
      END_STATE();
    case 9:
      if (lookahead == 'D') ADVANCE(103);
      END_STATE();
    case 10:
      if (lookahead == 'E') ADVANCE(21);
      if (lookahead == 'G') ADVANCE(11);
      if (lookahead == 'L') ADVANCE(12);
      if (lookahead == 'M') ADVANCE(20);
      if (lookahead == 'N') ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == 'E') ADVANCE(58);
      if (lookahead == 'T') ADVANCE(52);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(53);
      if (lookahead == 'T') ADVANCE(55);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(56);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(19);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == 'G') ADVANCE(95);
      END_STATE();
    case 17:
      if (lookahead == 'H') ADVANCE(5);
      END_STATE();
    case 18:
      if (lookahead == 'L') ADVANCE(93);
      END_STATE();
    case 19:
      if (lookahead == 'N') ADVANCE(101);
      END_STATE();
    case 20:
      if (lookahead == 'P') ADVANCE(57);
      END_STATE();
    case 21:
      if (lookahead == 'Q') ADVANCE(54);
      END_STATE();
    case 22:
      if (lookahead == 'R') ADVANCE(15);
      END_STATE();
    case 23:
      if (lookahead == 'S') ADVANCE(97);
      END_STATE();
    case 24:
      if (lookahead == 'T') ADVANCE(99);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 27:
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 28:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(28)
      if (lookahead == '\r') SKIP(28)
      if (lookahead == '-') ADVANCE(121);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(117);
      if (lookahead == 'K') ADVANCE(107);
      if (lookahead == 'L') ADVANCE(108);
      if (lookahead == 'R') ADVANCE(105);
      if (lookahead == 'S') ADVANCE(109);
      if (lookahead == 'T') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 29:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(29)
      if (lookahead == '\r') SKIP(29)
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 30:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(125);
      if (lookahead == '\r') ADVANCE(127);
      if (lookahead == '\\') ADVANCE(126);
      END_STATE();
    case 31:
      if (eof) ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(31)
      if (lookahead == '\r') SKIP(31)
      if (lookahead == '!') ADVANCE(38);
      if (lookahead == '&') ADVANCE(40);
      if (lookahead == '(') ADVANCE(33);
      if (lookahead == '+') ADVANCE(39);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == ';') ADVANCE(42);
      if (lookahead == '=') ADVANCE(36);
      if (lookahead == '@') ADVANCE(35);
      if (lookahead == 'A') ADVANCE(46);
      if (lookahead == 'D') ADVANCE(45);
      if (lookahead == 'M') ADVANCE(44);
      if (lookahead == 'n') ADVANCE(27);
      if (lookahead == '|') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_M);
      if (lookahead == 'D') ADVANCE(48);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_A);
      if (lookahead == 'D') ADVANCE(50);
      if (lookahead == 'M') ADVANCE(49);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_A);
      if (lookahead == 'D') ADVANCE(50);
      if (lookahead == 'M') ADVANCE(49);
      if (lookahead == 'R') ADVANCE(16);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_MD);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_AM);
      if (lookahead == 'D') ADVANCE(51);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_AD);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_AMD);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_JGT);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_JLE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_JEQ);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_JLT);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_JNE);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_JMP);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_JGE);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_R0);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_R0);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_R1);
      if (lookahead == '0') ADVANCE(79);
      if (lookahead == '1') ADVANCE(81);
      if (lookahead == '2') ADVANCE(83);
      if (lookahead == '3') ADVANCE(85);
      if (lookahead == '4') ADVANCE(87);
      if (lookahead == '5') ADVANCE(89);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_R1);
      if (lookahead == '0') ADVANCE(80);
      if (lookahead == '1') ADVANCE(82);
      if (lookahead == '2') ADVANCE(84);
      if (lookahead == '3') ADVANCE(86);
      if (lookahead == '4') ADVANCE(88);
      if (lookahead == '5') ADVANCE(90);
      if (lookahead == '-' ||
          ('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_R2);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_R2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_R3);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_R3);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_R4);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_R4);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_R5);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_R5);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_R6);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_R6);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_R7);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_R7);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_R8);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_R8);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_R9);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_R9);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_R10);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_R10);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_R11);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_R11);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_R12);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_R12);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_R13);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_R13);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_R14);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_R14);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_R15);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_R15);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_SP);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_SP);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_LCL);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_LCL);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_ARG);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_THIS);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_THIS);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_THAT);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_THAT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_SCREEN);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_SCREEN);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_KBD);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_KBD);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0') ADVANCE(60);
      if (lookahead == '1') ADVANCE(62);
      if (lookahead == '2') ADVANCE(64);
      if (lookahead == '3') ADVANCE(66);
      if (lookahead == '4') ADVANCE(68);
      if (lookahead == '5') ADVANCE(70);
      if (lookahead == '6') ADVANCE(72);
      if (lookahead == '7') ADVANCE(74);
      if (lookahead == '8') ADVANCE(76);
      if (lookahead == '9') ADVANCE(78);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(120);
      if (lookahead == 'I') ADVANCE(119);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(110);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(115);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(118);
      if (lookahead == 'P') ADVANCE(92);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(104);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(116);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(111);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(96);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H') ADVANCE(106);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(94);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(102);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(113);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(112);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(98);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(100);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(125);
      if (lookahead == '\r') ADVANCE(127);
      if (lookahead == '\\') ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(125);
      if (lookahead == '\\') ADVANCE(30);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 31},
  [2] = {.lex_state = 28},
  [3] = {.lex_state = 31},
  [4] = {.lex_state = 31},
  [5] = {.lex_state = 31},
  [6] = {.lex_state = 31},
  [7] = {.lex_state = 31},
  [8] = {.lex_state = 31},
  [9] = {.lex_state = 31},
  [10] = {.lex_state = 31},
  [11] = {.lex_state = 31},
  [12] = {.lex_state = 31},
  [13] = {.lex_state = 31},
  [14] = {.lex_state = 31},
  [15] = {.lex_state = 31},
  [16] = {.lex_state = 31},
  [17] = {.lex_state = 31},
  [18] = {.lex_state = 31},
  [19] = {.lex_state = 31},
  [20] = {.lex_state = 31},
  [21] = {.lex_state = 31},
  [22] = {.lex_state = 31},
  [23] = {.lex_state = 31},
  [24] = {.lex_state = 31},
  [25] = {.lex_state = 31},
  [26] = {.lex_state = 31},
  [27] = {.lex_state = 31},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 29},
  [31] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_M] = ACTIONS(1),
    [anon_sym_D] = ACTIONS(1),
    [anon_sym_A] = ACTIONS(1),
    [anon_sym_MD] = ACTIONS(1),
    [anon_sym_AM] = ACTIONS(1),
    [anon_sym_AD] = ACTIONS(1),
    [anon_sym_AMD] = ACTIONS(1),
    [anon_sym_JGT] = ACTIONS(1),
    [anon_sym_JLE] = ACTIONS(1),
    [anon_sym_JEQ] = ACTIONS(1),
    [anon_sym_JLT] = ACTIONS(1),
    [anon_sym_JNE] = ACTIONS(1),
    [anon_sym_JMP] = ACTIONS(1),
    [anon_sym_JGE] = ACTIONS(1),
    [anon_sym_R0] = ACTIONS(1),
    [anon_sym_R1] = ACTIONS(1),
    [anon_sym_R2] = ACTIONS(1),
    [anon_sym_R3] = ACTIONS(1),
    [anon_sym_R4] = ACTIONS(1),
    [anon_sym_R5] = ACTIONS(1),
    [anon_sym_R6] = ACTIONS(1),
    [anon_sym_R7] = ACTIONS(1),
    [anon_sym_R8] = ACTIONS(1),
    [anon_sym_R9] = ACTIONS(1),
    [anon_sym_R10] = ACTIONS(1),
    [anon_sym_R11] = ACTIONS(1),
    [anon_sym_R12] = ACTIONS(1),
    [anon_sym_R13] = ACTIONS(1),
    [anon_sym_R14] = ACTIONS(1),
    [anon_sym_R15] = ACTIONS(1),
    [anon_sym_SP] = ACTIONS(1),
    [anon_sym_LCL] = ACTIONS(1),
    [anon_sym_ARG] = ACTIONS(1),
    [anon_sym_THIS] = ACTIONS(1),
    [anon_sym_THAT] = ACTIONS(1),
    [anon_sym_SCREEN] = ACTIONS(1),
    [anon_sym_KBD] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(31),
    [sym__definition] = STATE(3),
    [sym_label] = STATE(3),
    [sym_c_instruction] = STATE(3),
    [sym__expression] = STATE(7),
    [sym_unary_expression] = STATE(7),
    [sym_binary_expression] = STATE(7),
    [sym_builtin_regs] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_AT] = ACTIONS(9),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(13),
    [anon_sym_null] = ACTIONS(15),
    [anon_sym_M] = ACTIONS(17),
    [anon_sym_D] = ACTIONS(15),
    [anon_sym_A] = ACTIONS(17),
    [anon_sym_MD] = ACTIONS(15),
    [anon_sym_AM] = ACTIONS(17),
    [anon_sym_AD] = ACTIONS(15),
    [anon_sym_AMD] = ACTIONS(15),
    [sym_number] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      sym_number,
    STATE(23), 1,
      sym_builtin_symbols,
    ACTIONS(21), 23,
      anon_sym_R0,
      anon_sym_R1,
      anon_sym_R2,
      anon_sym_R3,
      anon_sym_R4,
      anon_sym_R5,
      anon_sym_R6,
      anon_sym_R7,
      anon_sym_R8,
      anon_sym_R9,
      anon_sym_R10,
      anon_sym_R11,
      anon_sym_R12,
      anon_sym_R13,
      anon_sym_R14,
      anon_sym_R15,
      anon_sym_SP,
      anon_sym_LCL,
      anon_sym_ARG,
      anon_sym_THIS,
      anon_sym_THAT,
      anon_sym_SCREEN,
      anon_sym_KBD,
  [38] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_AT,
    ACTIONS(11), 1,
      anon_sym_DASH,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(19), 1,
      sym_number,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      sym_builtin_regs,
    ACTIONS(17), 3,
      anon_sym_M,
      anon_sym_A,
      anon_sym_AM,
    STATE(7), 3,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
    STATE(4), 4,
      sym__definition,
      sym_label,
      sym_c_instruction,
      aux_sym_source_file_repeat1,
    ACTIONS(15), 5,
      anon_sym_null,
      anon_sym_D,
      anon_sym_MD,
      anon_sym_AD,
      anon_sym_AMD,
  [86] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(34), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(40), 1,
      anon_sym_BANG,
    ACTIONS(49), 1,
      sym_number,
    STATE(8), 1,
      sym_builtin_regs,
    ACTIONS(46), 3,
      anon_sym_M,
      anon_sym_A,
      anon_sym_AM,
    STATE(7), 3,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
    STATE(4), 4,
      sym__definition,
      sym_label,
      sym_c_instruction,
      aux_sym_source_file_repeat1,
    ACTIONS(43), 5,
      anon_sym_null,
      anon_sym_D,
      anon_sym_MD,
      anon_sym_AD,
      anon_sym_AMD,
  [134] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 1,
      anon_sym_DASH,
    ACTIONS(56), 1,
      anon_sym_PLUS,
    ACTIONS(58), 1,
      anon_sym_AMP,
    ACTIONS(60), 1,
      anon_sym_PIPE,
    ACTIONS(62), 1,
      anon_sym_SEMI,
    STATE(27), 1,
      sym_jump_expression,
    ACTIONS(64), 3,
      anon_sym_M,
      anon_sym_A,
      anon_sym_AM,
    ACTIONS(52), 10,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_BANG,
      anon_sym_null,
      anon_sym_D,
      anon_sym_MD,
      anon_sym_AD,
      anon_sym_AMD,
      sym_number,
  [173] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 4,
      anon_sym_DASH,
      anon_sym_M,
      anon_sym_A,
      anon_sym_AM,
    ACTIONS(66), 15,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_EQ,
      anon_sym_BANG,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_null,
      anon_sym_D,
      anon_sym_MD,
      anon_sym_AD,
      anon_sym_AMD,
      sym_number,
  [200] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 1,
      anon_sym_DASH,
    ACTIONS(56), 1,
      anon_sym_PLUS,
    ACTIONS(58), 1,
      anon_sym_AMP,
    ACTIONS(60), 1,
      anon_sym_PIPE,
    ACTIONS(62), 1,
      anon_sym_SEMI,
    STATE(20), 1,
      sym_jump_expression,
    ACTIONS(72), 3,
      anon_sym_M,
      anon_sym_A,
      anon_sym_AM,
    ACTIONS(70), 10,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_BANG,
      anon_sym_null,
      anon_sym_D,
      anon_sym_MD,
      anon_sym_AD,
      anon_sym_AMD,
      sym_number,
  [239] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_EQ,
    ACTIONS(78), 4,
      anon_sym_DASH,
      anon_sym_M,
      anon_sym_A,
      anon_sym_AM,
    ACTIONS(74), 14,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_BANG,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_null,
      anon_sym_D,
      anon_sym_MD,
      anon_sym_AD,
      anon_sym_AMD,
      sym_number,
  [268] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_PLUS,
    ACTIONS(82), 4,
      anon_sym_DASH,
      anon_sym_M,
      anon_sym_A,
      anon_sym_AM,
    ACTIONS(80), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_null,
      anon_sym_D,
      anon_sym_MD,
      anon_sym_AD,
      anon_sym_AMD,
      sym_number,
  [296] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 1,
      anon_sym_DASH,
    ACTIONS(56), 1,
      anon_sym_PLUS,
    ACTIONS(58), 1,
      anon_sym_AMP,
    ACTIONS(60), 1,
      anon_sym_PIPE,
    ACTIONS(86), 3,
      anon_sym_M,
      anon_sym_A,
      anon_sym_AM,
    ACTIONS(84), 11,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_BANG,
      anon_sym_SEMI,
      anon_sym_null,
      anon_sym_D,
      anon_sym_MD,
      anon_sym_AD,
      anon_sym_AMD,
      sym_number,
  [330] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 1,
      anon_sym_DASH,
    ACTIONS(56), 1,
      anon_sym_PLUS,
    ACTIONS(58), 1,
      anon_sym_AMP,
    ACTIONS(82), 3,
      anon_sym_M,
      anon_sym_A,
      anon_sym_AM,
    ACTIONS(80), 12,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_null,
      anon_sym_D,
      anon_sym_MD,
      anon_sym_AD,
      anon_sym_AMD,
      sym_number,
  [362] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 1,
      anon_sym_DASH,
    ACTIONS(56), 1,
      anon_sym_PLUS,
    ACTIONS(82), 3,
      anon_sym_M,
      anon_sym_A,
      anon_sym_AM,
    ACTIONS(80), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_null,
      anon_sym_D,
      anon_sym_MD,
      anon_sym_AD,
      anon_sym_AMD,
      sym_number,
  [392] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 4,
      anon_sym_DASH,
      anon_sym_M,
      anon_sym_A,
      anon_sym_AM,
    ACTIONS(80), 14,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_BANG,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_null,
      anon_sym_D,
      anon_sym_MD,
      anon_sym_AD,
      anon_sym_AMD,
      sym_number,
  [418] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DASH,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(88), 1,
      sym_number,
    ACTIONS(17), 3,
      anon_sym_M,
      anon_sym_A,
      anon_sym_AM,
    STATE(9), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_builtin_regs,
    ACTIONS(15), 5,
      anon_sym_null,
      anon_sym_D,
      anon_sym_MD,
      anon_sym_AD,
      anon_sym_AMD,
  [449] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DASH,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(90), 1,
      sym_number,
    ACTIONS(17), 3,
      anon_sym_M,
      anon_sym_A,
      anon_sym_AM,
    STATE(13), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_builtin_regs,
    ACTIONS(15), 5,
      anon_sym_null,
      anon_sym_D,
      anon_sym_MD,
      anon_sym_AD,
      anon_sym_AMD,
  [480] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DASH,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(92), 1,
      sym_number,
    ACTIONS(17), 3,
      anon_sym_M,
      anon_sym_A,
      anon_sym_AM,
    STATE(12), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_builtin_regs,
    ACTIONS(15), 5,
      anon_sym_null,
      anon_sym_D,
      anon_sym_MD,
      anon_sym_AD,
      anon_sym_AMD,
  [511] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DASH,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(94), 1,
      sym_number,
    ACTIONS(17), 3,
      anon_sym_M,
      anon_sym_A,
      anon_sym_AM,
    STATE(11), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_builtin_regs,
    ACTIONS(15), 5,
      anon_sym_null,
      anon_sym_D,
      anon_sym_MD,
      anon_sym_AD,
      anon_sym_AMD,
  [542] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DASH,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(96), 1,
      sym_number,
    ACTIONS(17), 3,
      anon_sym_M,
      anon_sym_A,
      anon_sym_AM,
    STATE(5), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_builtin_regs,
    ACTIONS(15), 5,
      anon_sym_null,
      anon_sym_D,
      anon_sym_MD,
      anon_sym_AD,
      anon_sym_AMD,
  [573] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DASH,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(98), 1,
      sym_number,
    ACTIONS(17), 3,
      anon_sym_M,
      anon_sym_A,
      anon_sym_AM,
    STATE(10), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_builtin_regs,
    ACTIONS(15), 5,
      anon_sym_null,
      anon_sym_D,
      anon_sym_MD,
      anon_sym_AD,
      anon_sym_AMD,
  [604] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 4,
      anon_sym_DASH,
      anon_sym_M,
      anon_sym_A,
      anon_sym_AM,
    ACTIONS(100), 10,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_BANG,
      anon_sym_null,
      anon_sym_D,
      anon_sym_MD,
      anon_sym_AD,
      anon_sym_AMD,
      sym_number,
  [626] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 4,
      anon_sym_DASH,
      anon_sym_M,
      anon_sym_A,
      anon_sym_AM,
    ACTIONS(104), 10,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_BANG,
      anon_sym_null,
      anon_sym_D,
      anon_sym_MD,
      anon_sym_AD,
      anon_sym_AMD,
      sym_number,
  [648] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 4,
      anon_sym_DASH,
      anon_sym_M,
      anon_sym_A,
      anon_sym_AM,
    ACTIONS(108), 10,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_BANG,
      anon_sym_null,
      anon_sym_D,
      anon_sym_MD,
      anon_sym_AD,
      anon_sym_AMD,
      sym_number,
  [670] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 4,
      anon_sym_DASH,
      anon_sym_M,
      anon_sym_A,
      anon_sym_AM,
    ACTIONS(112), 10,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_BANG,
      anon_sym_null,
      anon_sym_D,
      anon_sym_MD,
      anon_sym_AD,
      anon_sym_AMD,
      sym_number,
  [692] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 4,
      anon_sym_DASH,
      anon_sym_M,
      anon_sym_A,
      anon_sym_AM,
    ACTIONS(116), 10,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_BANG,
      anon_sym_null,
      anon_sym_D,
      anon_sym_MD,
      anon_sym_AD,
      anon_sym_AMD,
      sym_number,
  [714] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 4,
      anon_sym_DASH,
      anon_sym_M,
      anon_sym_A,
      anon_sym_AM,
    ACTIONS(120), 10,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_BANG,
      anon_sym_null,
      anon_sym_D,
      anon_sym_MD,
      anon_sym_AD,
      anon_sym_AMD,
      sym_number,
  [736] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 4,
      anon_sym_DASH,
      anon_sym_M,
      anon_sym_A,
      anon_sym_AM,
    ACTIONS(124), 10,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_BANG,
      anon_sym_null,
      anon_sym_D,
      anon_sym_MD,
      anon_sym_AD,
      anon_sym_AMD,
      sym_number,
  [758] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 4,
      anon_sym_DASH,
      anon_sym_M,
      anon_sym_A,
      anon_sym_AM,
    ACTIONS(128), 10,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_BANG,
      anon_sym_null,
      anon_sym_D,
      anon_sym_MD,
      anon_sym_AD,
      anon_sym_AMD,
      sym_number,
  [780] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(26), 1,
      sym_conditionals,
    ACTIONS(132), 7,
      anon_sym_JGT,
      anon_sym_JLE,
      anon_sym_JEQ,
      anon_sym_JLT,
      anon_sym_JNE,
      anon_sym_JMP,
      anon_sym_JGE,
  [796] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_RPAREN,
  [803] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      sym_identifier,
  [810] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 38,
  [SMALL_STATE(4)] = 86,
  [SMALL_STATE(5)] = 134,
  [SMALL_STATE(6)] = 173,
  [SMALL_STATE(7)] = 200,
  [SMALL_STATE(8)] = 239,
  [SMALL_STATE(9)] = 268,
  [SMALL_STATE(10)] = 296,
  [SMALL_STATE(11)] = 330,
  [SMALL_STATE(12)] = 362,
  [SMALL_STATE(13)] = 392,
  [SMALL_STATE(14)] = 418,
  [SMALL_STATE(15)] = 449,
  [SMALL_STATE(16)] = 480,
  [SMALL_STATE(17)] = 511,
  [SMALL_STATE(18)] = 542,
  [SMALL_STATE(19)] = 573,
  [SMALL_STATE(20)] = 604,
  [SMALL_STATE(21)] = 626,
  [SMALL_STATE(22)] = 648,
  [SMALL_STATE(23)] = 670,
  [SMALL_STATE(24)] = 692,
  [SMALL_STATE(25)] = 714,
  [SMALL_STATE(26)] = 736,
  [SMALL_STATE(27)] = 758,
  [SMALL_STATE(28)] = 780,
  [SMALL_STATE(29)] = 796,
  [SMALL_STATE(30)] = 803,
  [SMALL_STATE(31)] = 810,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(30),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_c_instruction, 3),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_c_instruction, 3),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_regs, 1),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_regs, 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_c_instruction, 1),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_c_instruction, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_c_instruction, 2),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_c_instruction, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3, .production_id = 1),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3, .production_id = 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_symbols, 1),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_symbols, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, .production_id = 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2, .production_id = 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditionals, 1),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditionals, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump_expression, 2),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jump_expression, 2),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_c_instruction, 4),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_c_instruction, 4),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [138] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_hackasm(void) {
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
