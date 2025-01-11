#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 63
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 32
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_def = 1,
  anon_sym_COLON = 2,
  anon_sym_COLON_EQ = 3,
  anon_sym_thm = 4,
  anon_sym_EQ_GT = 5,
  anon_sym_LPAREN = 6,
  anon_sym_RPAREN = 7,
  anon_sym_DASH_GT = 8,
  anon_sym_Sort = 9,
  anon_sym_POUND = 10,
  aux_sym_bound_var_token1 = 11,
  anon_sym_PLUS = 12,
  anon_sym_1 = 13,
  anon_sym_Max = 14,
  anon_sym_COMMA = 15,
  anon_sym_IMax = 16,
  sym_identifier = 17,
  sym_start = 18,
  sym_definition = 19,
  sym_theorem = 20,
  sym_expr = 21,
  sym_primary = 22,
  sym_app = 23,
  sym_lambda = 24,
  sym_lambda_arg = 25,
  sym_forall = 26,
  sym_forall_arg = 27,
  sym_sort = 28,
  sym_const = 29,
  sym_bound_var = 30,
  sym_level = 31,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_def] = "def",
  [anon_sym_COLON] = ":",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_thm] = "thm",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_Sort] = "Sort",
  [anon_sym_POUND] = "#",
  [aux_sym_bound_var_token1] = "bound_var_token1",
  [anon_sym_PLUS] = "+",
  [anon_sym_1] = "1",
  [anon_sym_Max] = "Max",
  [anon_sym_COMMA] = ",",
  [anon_sym_IMax] = "IMax",
  [sym_identifier] = "identifier",
  [sym_start] = "start",
  [sym_definition] = "definition",
  [sym_theorem] = "theorem",
  [sym_expr] = "expr",
  [sym_primary] = "primary",
  [sym_app] = "app",
  [sym_lambda] = "lambda",
  [sym_lambda_arg] = "lambda_arg",
  [sym_forall] = "forall",
  [sym_forall_arg] = "forall_arg",
  [sym_sort] = "sort",
  [sym_const] = "const",
  [sym_bound_var] = "bound_var",
  [sym_level] = "level",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_def] = anon_sym_def,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_thm] = anon_sym_thm,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_Sort] = anon_sym_Sort,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_bound_var_token1] = aux_sym_bound_var_token1,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_1] = anon_sym_1,
  [anon_sym_Max] = anon_sym_Max,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_IMax] = anon_sym_IMax,
  [sym_identifier] = sym_identifier,
  [sym_start] = sym_start,
  [sym_definition] = sym_definition,
  [sym_theorem] = sym_theorem,
  [sym_expr] = sym_expr,
  [sym_primary] = sym_primary,
  [sym_app] = sym_app,
  [sym_lambda] = sym_lambda,
  [sym_lambda_arg] = sym_lambda_arg,
  [sym_forall] = sym_forall,
  [sym_forall_arg] = sym_forall_arg,
  [sym_sort] = sym_sort,
  [sym_const] = sym_const,
  [sym_bound_var] = sym_bound_var,
  [sym_level] = sym_level,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_def] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_thm] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
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
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Sort] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_bound_var_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Max] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IMax] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_start] = {
    .visible = true,
    .named = true,
  },
  [sym_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_theorem] = {
    .visible = true,
    .named = true,
  },
  [sym_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_primary] = {
    .visible = true,
    .named = true,
  },
  [sym_app] = {
    .visible = true,
    .named = true,
  },
  [sym_lambda] = {
    .visible = true,
    .named = true,
  },
  [sym_lambda_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_forall] = {
    .visible = true,
    .named = true,
  },
  [sym_forall_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_sort] = {
    .visible = true,
    .named = true,
  },
  [sym_const] = {
    .visible = true,
    .named = true,
  },
  [sym_bound_var] = {
    .visible = true,
    .named = true,
  },
  [sym_level] = {
    .visible = true,
    .named = true,
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
  [9] = 2,
  [10] = 10,
  [11] = 11,
  [12] = 3,
  [13] = 4,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 19,
  [21] = 14,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 25,
  [29] = 29,
  [30] = 29,
  [31] = 31,
  [32] = 26,
  [33] = 33,
  [34] = 23,
  [35] = 24,
  [36] = 27,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 40,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 50,
  [59] = 55,
  [60] = 56,
  [61] = 61,
  [62] = 48,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(9);
      ADVANCE_MAP(
        '#', 19,
        '(', 15,
        ')', 16,
        '+', 22,
        ',', 26,
        '-', 3,
        '1', 24,
        ':', 11,
        '=', 4,
        'I', 28,
        'M', 29,
        'S', 35,
        'd', 31,
        't', 33,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == 'S') ADVANCE(35);
      if (lookahead == 'd') ADVANCE(31);
      if (lookahead == 't') ADVANCE(33);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 2:
      if (lookahead == '1') ADVANCE(23);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 3:
      if (lookahead == '>') ADVANCE(17);
      END_STATE();
    case 4:
      if (lookahead == '>') ADVANCE(14);
      END_STATE();
    case 5:
      if (lookahead == 'I') ADVANCE(28);
      if (lookahead == 'M') ADVANCE(29);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 6:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 7:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 8:
      if (eof) ADVANCE(9);
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == ')') ADVANCE(16);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == 'S') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(12);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_thm);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_Sort);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_bound_var_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_bound_var_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_Max);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_IMax);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(30);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(38);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(39);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(32);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(34);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(13);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(36);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(37);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(18);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(25);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(27);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1},
  [2] = {.lex_state = 8},
  [3] = {.lex_state = 8},
  [4] = {.lex_state = 8},
  [5] = {.lex_state = 8},
  [6] = {.lex_state = 8},
  [7] = {.lex_state = 8},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 8},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_def] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_thm] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_Sort] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [aux_sym_bound_var_token1] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_1] = ACTIONS(1),
    [anon_sym_Max] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_IMax] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
  },
  [1] = {
    [sym_start] = STATE(57),
    [sym_definition] = STATE(49),
    [sym_theorem] = STATE(49),
    [sym_expr] = STATE(6),
    [sym_primary] = STATE(24),
    [sym_app] = STATE(24),
    [sym_lambda] = STATE(24),
    [sym_lambda_arg] = STATE(55),
    [sym_forall] = STATE(24),
    [sym_forall_arg] = STATE(56),
    [sym_sort] = STATE(25),
    [sym_const] = STATE(25),
    [sym_bound_var] = STATE(25),
    [anon_sym_def] = ACTIONS(3),
    [anon_sym_thm] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_Sort] = ACTIONS(9),
    [anon_sym_POUND] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    STATE(2), 1,
      sym_expr,
    STATE(55), 1,
      sym_lambda_arg,
    STATE(56), 1,
      sym_forall_arg,
    ACTIONS(17), 2,
      anon_sym_Sort,
      sym_identifier,
    STATE(25), 3,
      sym_sort,
      sym_const,
      sym_bound_var,
    ACTIONS(15), 4,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
      anon_sym_LPAREN,
      anon_sym_POUND,
    STATE(24), 4,
      sym_primary,
      sym_app,
      sym_lambda,
      sym_forall,
  [31] = 10,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_Sort,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      sym_identifier,
    STATE(2), 1,
      sym_expr,
    STATE(55), 1,
      sym_lambda_arg,
    STATE(56), 1,
      sym_forall_arg,
    ACTIONS(19), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    STATE(25), 3,
      sym_sort,
      sym_const,
      sym_bound_var,
    STATE(24), 4,
      sym_primary,
      sym_app,
      sym_lambda,
      sym_forall,
  [68] = 10,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_Sort,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      sym_identifier,
    STATE(2), 1,
      sym_expr,
    STATE(55), 1,
      sym_lambda_arg,
    STATE(56), 1,
      sym_forall_arg,
    ACTIONS(21), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    STATE(25), 3,
      sym_sort,
      sym_const,
      sym_bound_var,
    STATE(24), 4,
      sym_primary,
      sym_app,
      sym_lambda,
      sym_forall,
  [105] = 11,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_Sort,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      anon_sym_COLON_EQ,
    STATE(2), 1,
      sym_expr,
    STATE(55), 1,
      sym_lambda_arg,
    STATE(56), 1,
      sym_forall_arg,
    STATE(25), 3,
      sym_sort,
      sym_const,
      sym_bound_var,
    STATE(24), 4,
      sym_primary,
      sym_app,
      sym_lambda,
      sym_forall,
  [144] = 10,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_Sort,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_expr,
    STATE(55), 1,
      sym_lambda_arg,
    STATE(56), 1,
      sym_forall_arg,
    STATE(25), 3,
      sym_sort,
      sym_const,
      sym_bound_var,
    STATE(24), 4,
      sym_primary,
      sym_app,
      sym_lambda,
      sym_forall,
  [180] = 10,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_Sort,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_expr,
    STATE(55), 1,
      sym_lambda_arg,
    STATE(56), 1,
      sym_forall_arg,
    STATE(25), 3,
      sym_sort,
      sym_const,
      sym_bound_var,
    STATE(24), 4,
      sym_primary,
      sym_app,
      sym_lambda,
      sym_forall,
  [216] = 10,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_RPAREN,
    ACTIONS(31), 1,
      anon_sym_Sort,
    ACTIONS(33), 1,
      anon_sym_POUND,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(9), 1,
      sym_expr,
    STATE(59), 1,
      sym_lambda_arg,
    STATE(60), 1,
      sym_forall_arg,
    STATE(28), 3,
      sym_sort,
      sym_const,
      sym_bound_var,
    STATE(35), 4,
      sym_primary,
      sym_app,
      sym_lambda,
      sym_forall,
  [252] = 7,
    STATE(9), 1,
      sym_expr,
    STATE(59), 1,
      sym_lambda_arg,
    STATE(60), 1,
      sym_forall_arg,
    ACTIONS(17), 2,
      anon_sym_Sort,
      sym_identifier,
    ACTIONS(15), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_POUND,
    STATE(28), 3,
      sym_sort,
      sym_const,
      sym_bound_var,
    STATE(35), 4,
      sym_primary,
      sym_app,
      sym_lambda,
      sym_forall,
  [282] = 10,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_Sort,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_expr,
    STATE(55), 1,
      sym_lambda_arg,
    STATE(56), 1,
      sym_forall_arg,
    STATE(25), 3,
      sym_sort,
      sym_const,
      sym_bound_var,
    STATE(24), 4,
      sym_primary,
      sym_app,
      sym_lambda,
      sym_forall,
  [318] = 10,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_Sort,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_expr,
    STATE(55), 1,
      sym_lambda_arg,
    STATE(56), 1,
      sym_forall_arg,
    STATE(25), 3,
      sym_sort,
      sym_const,
      sym_bound_var,
    STATE(24), 4,
      sym_primary,
      sym_app,
      sym_lambda,
      sym_forall,
  [354] = 10,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_RPAREN,
    ACTIONS(31), 1,
      anon_sym_Sort,
    ACTIONS(33), 1,
      anon_sym_POUND,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(9), 1,
      sym_expr,
    STATE(59), 1,
      sym_lambda_arg,
    STATE(60), 1,
      sym_forall_arg,
    STATE(28), 3,
      sym_sort,
      sym_const,
      sym_bound_var,
    STATE(35), 4,
      sym_primary,
      sym_app,
      sym_lambda,
      sym_forall,
  [390] = 10,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_RPAREN,
    ACTIONS(31), 1,
      anon_sym_Sort,
    ACTIONS(33), 1,
      anon_sym_POUND,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(9), 1,
      sym_expr,
    STATE(59), 1,
      sym_lambda_arg,
    STATE(60), 1,
      sym_forall_arg,
    STATE(28), 3,
      sym_sort,
      sym_const,
      sym_bound_var,
    STATE(35), 4,
      sym_primary,
      sym_app,
      sym_lambda,
      sym_forall,
  [426] = 9,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_Sort,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      sym_identifier,
    STATE(3), 1,
      sym_expr,
    STATE(55), 1,
      sym_lambda_arg,
    STATE(56), 1,
      sym_forall_arg,
    STATE(25), 3,
      sym_sort,
      sym_const,
      sym_bound_var,
    STATE(24), 4,
      sym_primary,
      sym_app,
      sym_lambda,
      sym_forall,
  [459] = 9,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_Sort,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      sym_identifier,
    STATE(7), 1,
      sym_expr,
    STATE(55), 1,
      sym_lambda_arg,
    STATE(56), 1,
      sym_forall_arg,
    STATE(25), 3,
      sym_sort,
      sym_const,
      sym_bound_var,
    STATE(24), 4,
      sym_primary,
      sym_app,
      sym_lambda,
      sym_forall,
  [492] = 9,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_Sort,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      sym_identifier,
    STATE(10), 1,
      sym_expr,
    STATE(55), 1,
      sym_lambda_arg,
    STATE(56), 1,
      sym_forall_arg,
    STATE(25), 3,
      sym_sort,
      sym_const,
      sym_bound_var,
    STATE(24), 4,
      sym_primary,
      sym_app,
      sym_lambda,
      sym_forall,
  [525] = 9,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_Sort,
    ACTIONS(33), 1,
      anon_sym_POUND,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(8), 1,
      sym_expr,
    STATE(59), 1,
      sym_lambda_arg,
    STATE(60), 1,
      sym_forall_arg,
    STATE(28), 3,
      sym_sort,
      sym_const,
      sym_bound_var,
    STATE(35), 4,
      sym_primary,
      sym_app,
      sym_lambda,
      sym_forall,
  [558] = 9,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_Sort,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      sym_identifier,
    STATE(5), 1,
      sym_expr,
    STATE(55), 1,
      sym_lambda_arg,
    STATE(56), 1,
      sym_forall_arg,
    STATE(25), 3,
      sym_sort,
      sym_const,
      sym_bound_var,
    STATE(24), 4,
      sym_primary,
      sym_app,
      sym_lambda,
      sym_forall,
  [591] = 9,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_Sort,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      sym_identifier,
    STATE(4), 1,
      sym_expr,
    STATE(55), 1,
      sym_lambda_arg,
    STATE(56), 1,
      sym_forall_arg,
    STATE(25), 3,
      sym_sort,
      sym_const,
      sym_bound_var,
    STATE(24), 4,
      sym_primary,
      sym_app,
      sym_lambda,
      sym_forall,
  [624] = 9,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_Sort,
    ACTIONS(33), 1,
      anon_sym_POUND,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(13), 1,
      sym_expr,
    STATE(59), 1,
      sym_lambda_arg,
    STATE(60), 1,
      sym_forall_arg,
    STATE(28), 3,
      sym_sort,
      sym_const,
      sym_bound_var,
    STATE(35), 4,
      sym_primary,
      sym_app,
      sym_lambda,
      sym_forall,
  [657] = 9,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_Sort,
    ACTIONS(33), 1,
      anon_sym_POUND,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(12), 1,
      sym_expr,
    STATE(59), 1,
      sym_lambda_arg,
    STATE(60), 1,
      sym_forall_arg,
    STATE(28), 3,
      sym_sort,
      sym_const,
      sym_bound_var,
    STATE(35), 4,
      sym_primary,
      sym_app,
      sym_lambda,
      sym_forall,
  [690] = 9,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_Sort,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      sym_identifier,
    STATE(11), 1,
      sym_expr,
    STATE(55), 1,
      sym_lambda_arg,
    STATE(56), 1,
      sym_forall_arg,
    STATE(25), 3,
      sym_sort,
      sym_const,
      sym_bound_var,
    STATE(24), 4,
      sym_primary,
      sym_app,
      sym_lambda,
      sym_forall,
  [723] = 2,
    ACTIONS(43), 3,
      anon_sym_COLON,
      anon_sym_Sort,
      sym_identifier,
    ACTIONS(41), 4,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
      anon_sym_LPAREN,
      anon_sym_POUND,
  [735] = 2,
    ACTIONS(47), 2,
      anon_sym_Sort,
      sym_identifier,
    ACTIONS(45), 4,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
      anon_sym_LPAREN,
      anon_sym_POUND,
  [746] = 2,
    ACTIONS(51), 2,
      anon_sym_Sort,
      sym_identifier,
    ACTIONS(49), 4,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
      anon_sym_LPAREN,
      anon_sym_POUND,
  [757] = 2,
    ACTIONS(55), 2,
      anon_sym_Sort,
      sym_identifier,
    ACTIONS(53), 4,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
      anon_sym_LPAREN,
      anon_sym_POUND,
  [768] = 2,
    ACTIONS(59), 2,
      anon_sym_Sort,
      sym_identifier,
    ACTIONS(57), 4,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
      anon_sym_LPAREN,
      anon_sym_POUND,
  [779] = 2,
    ACTIONS(51), 2,
      anon_sym_Sort,
      sym_identifier,
    ACTIONS(49), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_POUND,
  [789] = 3,
    STATE(45), 1,
      sym_level,
    ACTIONS(61), 2,
      aux_sym_bound_var_token1,
      sym_identifier,
    ACTIONS(63), 2,
      anon_sym_Max,
      anon_sym_IMax,
  [801] = 3,
    STATE(40), 1,
      sym_level,
    ACTIONS(61), 2,
      aux_sym_bound_var_token1,
      sym_identifier,
    ACTIONS(63), 2,
      anon_sym_Max,
      anon_sym_IMax,
  [813] = 3,
    STATE(46), 1,
      sym_level,
    ACTIONS(61), 2,
      aux_sym_bound_var_token1,
      sym_identifier,
    ACTIONS(63), 2,
      anon_sym_Max,
      anon_sym_IMax,
  [825] = 2,
    ACTIONS(55), 2,
      anon_sym_Sort,
      sym_identifier,
    ACTIONS(53), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_POUND,
  [835] = 3,
    STATE(42), 1,
      sym_level,
    ACTIONS(61), 2,
      aux_sym_bound_var_token1,
      sym_identifier,
    ACTIONS(63), 2,
      anon_sym_Max,
      anon_sym_IMax,
  [847] = 2,
    ACTIONS(43), 2,
      anon_sym_Sort,
      sym_identifier,
    ACTIONS(41), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_POUND,
  [857] = 2,
    ACTIONS(47), 2,
      anon_sym_Sort,
      sym_identifier,
    ACTIONS(45), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_POUND,
  [867] = 2,
    ACTIONS(59), 2,
      anon_sym_Sort,
      sym_identifier,
    ACTIONS(57), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_POUND,
  [877] = 1,
    ACTIONS(65), 3,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_COMMA,
  [883] = 1,
    ACTIONS(67), 3,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_COMMA,
  [889] = 1,
    ACTIONS(69), 3,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_COMMA,
  [895] = 2,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    ACTIONS(73), 1,
      anon_sym_PLUS,
  [902] = 2,
    ACTIONS(75), 1,
      anon_sym_COLON,
    ACTIONS(77), 1,
      anon_sym_COLON_EQ,
  [909] = 2,
    ACTIONS(73), 1,
      anon_sym_PLUS,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
  [916] = 2,
    ACTIONS(81), 1,
      sym_identifier,
    STATE(47), 1,
      sym_const,
  [923] = 2,
    ACTIONS(83), 1,
      anon_sym_EQ_GT,
    ACTIONS(85), 1,
      anon_sym_DASH_GT,
  [930] = 2,
    ACTIONS(73), 1,
      anon_sym_PLUS,
    ACTIONS(87), 1,
      anon_sym_RPAREN,
  [937] = 2,
    ACTIONS(73), 1,
      anon_sym_PLUS,
    ACTIONS(89), 1,
      anon_sym_COMMA,
  [944] = 1,
    ACTIONS(91), 1,
      anon_sym_COLON,
  [948] = 1,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
  [952] = 1,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
  [956] = 1,
    ACTIONS(95), 1,
      aux_sym_bound_var_token1,
  [960] = 1,
    ACTIONS(97), 1,
      anon_sym_COLON,
  [964] = 1,
    ACTIONS(99), 1,
      sym_identifier,
  [968] = 1,
    ACTIONS(101), 1,
      sym_identifier,
  [972] = 1,
    ACTIONS(103), 1,
      anon_sym_1,
  [976] = 1,
    ACTIONS(105), 1,
      anon_sym_EQ_GT,
  [980] = 1,
    ACTIONS(107), 1,
      anon_sym_DASH_GT,
  [984] = 1,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
  [988] = 1,
    ACTIONS(111), 1,
      aux_sym_bound_var_token1,
  [992] = 1,
    ACTIONS(113), 1,
      anon_sym_EQ_GT,
  [996] = 1,
    ACTIONS(115), 1,
      anon_sym_DASH_GT,
  [1000] = 1,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
  [1004] = 1,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 31,
  [SMALL_STATE(4)] = 68,
  [SMALL_STATE(5)] = 105,
  [SMALL_STATE(6)] = 144,
  [SMALL_STATE(7)] = 180,
  [SMALL_STATE(8)] = 216,
  [SMALL_STATE(9)] = 252,
  [SMALL_STATE(10)] = 282,
  [SMALL_STATE(11)] = 318,
  [SMALL_STATE(12)] = 354,
  [SMALL_STATE(13)] = 390,
  [SMALL_STATE(14)] = 426,
  [SMALL_STATE(15)] = 459,
  [SMALL_STATE(16)] = 492,
  [SMALL_STATE(17)] = 525,
  [SMALL_STATE(18)] = 558,
  [SMALL_STATE(19)] = 591,
  [SMALL_STATE(20)] = 624,
  [SMALL_STATE(21)] = 657,
  [SMALL_STATE(22)] = 690,
  [SMALL_STATE(23)] = 723,
  [SMALL_STATE(24)] = 735,
  [SMALL_STATE(25)] = 746,
  [SMALL_STATE(26)] = 757,
  [SMALL_STATE(27)] = 768,
  [SMALL_STATE(28)] = 779,
  [SMALL_STATE(29)] = 789,
  [SMALL_STATE(30)] = 801,
  [SMALL_STATE(31)] = 813,
  [SMALL_STATE(32)] = 825,
  [SMALL_STATE(33)] = 835,
  [SMALL_STATE(34)] = 847,
  [SMALL_STATE(35)] = 857,
  [SMALL_STATE(36)] = 867,
  [SMALL_STATE(37)] = 877,
  [SMALL_STATE(38)] = 883,
  [SMALL_STATE(39)] = 889,
  [SMALL_STATE(40)] = 895,
  [SMALL_STATE(41)] = 902,
  [SMALL_STATE(42)] = 909,
  [SMALL_STATE(43)] = 916,
  [SMALL_STATE(44)] = 923,
  [SMALL_STATE(45)] = 930,
  [SMALL_STATE(46)] = 937,
  [SMALL_STATE(47)] = 944,
  [SMALL_STATE(48)] = 948,
  [SMALL_STATE(49)] = 952,
  [SMALL_STATE(50)] = 956,
  [SMALL_STATE(51)] = 960,
  [SMALL_STATE(52)] = 964,
  [SMALL_STATE(53)] = 968,
  [SMALL_STATE(54)] = 972,
  [SMALL_STATE(55)] = 976,
  [SMALL_STATE(56)] = 980,
  [SMALL_STATE(57)] = 984,
  [SMALL_STATE(58)] = 988,
  [SMALL_STATE(59)] = 992,
  [SMALL_STATE(60)] = 996,
  [SMALL_STATE(61)] = 1000,
  [SMALL_STATE(62)] = 1004,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_app, 2, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_app, 2, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 3, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forall, 3, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 4, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start, 1, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_theorem, 4, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 6, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const, 1, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const, 1, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 1, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary, 1, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary, 1, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bound_var, 2, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bound_var, 2, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sort, 4, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sort, 4, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_level, 6, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_level, 3, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_level, 1, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda_arg, 5, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forall_arg, 5, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [109] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_lean4_lambda_calculator(void) {
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
