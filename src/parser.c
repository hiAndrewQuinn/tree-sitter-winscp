#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 39
#define LARGE_STATE_COUNT 23
#define SYMBOL_COUNT 53
#define ALIAS_COUNT 0
#define TOKEN_COUNT 42
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_POUND = 1,
  aux_sym_comment_token1 = 2,
  sym_continue_line = 3,
  anon_sym_PERCENT = 4,
  aux_sym_env_variable_token1 = 5,
  anon_sym_DASH = 6,
  anon_sym_SLASH = 7,
  aux_sym_command_switch_token1 = 8,
  anon_sym_EQ = 9,
  anon_sym_SQUOTE = 10,
  aux_sym_command_parameter_token1 = 11,
  anon_sym_DQUOTE = 12,
  aux_sym_command_parameter_token2 = 13,
  aux_sym_command_parameter_token3 = 14,
  anon_sym_call = 15,
  anon_sym_cd = 16,
  anon_sym_checksum = 17,
  anon_sym_chmod = 18,
  anon_sym_close = 19,
  anon_sym_cp = 20,
  anon_sym_echo = 21,
  anon_sym_exit = 22,
  anon_sym_get = 23,
  anon_sym_help = 24,
  anon_sym_keepuptodate = 25,
  anon_sym_lcd = 26,
  anon_sym_lls = 27,
  anon_sym_ln = 28,
  anon_sym_lpwd = 29,
  anon_sym_ls = 30,
  anon_sym_mkdir = 31,
  anon_sym_mv = 32,
  anon_sym_open = 33,
  anon_sym_option = 34,
  anon_sym_put = 35,
  anon_sym_pwd = 36,
  anon_sym_rm = 37,
  anon_sym_rmdir = 38,
  anon_sym_session = 39,
  anon_sym_stat = 40,
  anon_sym_synchronize = 41,
  sym_source_file = 42,
  sym__line = 43,
  sym_comment = 44,
  sym_env_variable = 45,
  sym_command = 46,
  sym_command_switch = 47,
  sym_command_parameter = 48,
  sym_command_name = 49,
  aux_sym_source_file_repeat1 = 50,
  aux_sym_command_repeat1 = 51,
  aux_sym_command_repeat2 = 52,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_continue_line] = "continue_line",
  [anon_sym_PERCENT] = "%",
  [aux_sym_env_variable_token1] = "env_variable_token1",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [aux_sym_command_switch_token1] = "command_switch_token1",
  [anon_sym_EQ] = "=",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_command_parameter_token1] = "command_parameter_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_command_parameter_token2] = "command_parameter_token2",
  [aux_sym_command_parameter_token3] = "command_parameter_token3",
  [anon_sym_call] = "call",
  [anon_sym_cd] = "cd",
  [anon_sym_checksum] = "checksum",
  [anon_sym_chmod] = "chmod",
  [anon_sym_close] = "close",
  [anon_sym_cp] = "cp",
  [anon_sym_echo] = "echo",
  [anon_sym_exit] = "exit",
  [anon_sym_get] = "get",
  [anon_sym_help] = "help",
  [anon_sym_keepuptodate] = "keepuptodate",
  [anon_sym_lcd] = "lcd",
  [anon_sym_lls] = "lls",
  [anon_sym_ln] = "ln",
  [anon_sym_lpwd] = "lpwd",
  [anon_sym_ls] = "ls",
  [anon_sym_mkdir] = "mkdir",
  [anon_sym_mv] = "mv",
  [anon_sym_open] = "open",
  [anon_sym_option] = "option",
  [anon_sym_put] = "put",
  [anon_sym_pwd] = "pwd",
  [anon_sym_rm] = "rm",
  [anon_sym_rmdir] = "rmdir",
  [anon_sym_session] = "session",
  [anon_sym_stat] = "stat",
  [anon_sym_synchronize] = "synchronize",
  [sym_source_file] = "source_file",
  [sym__line] = "_line",
  [sym_comment] = "comment",
  [sym_env_variable] = "env_variable",
  [sym_command] = "command",
  [sym_command_switch] = "command_switch",
  [sym_command_parameter] = "command_parameter",
  [sym_command_name] = "command_name",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_command_repeat1] = "command_repeat1",
  [aux_sym_command_repeat2] = "command_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_continue_line] = sym_continue_line,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [aux_sym_env_variable_token1] = aux_sym_env_variable_token1,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [aux_sym_command_switch_token1] = aux_sym_command_switch_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_command_parameter_token1] = aux_sym_command_parameter_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_command_parameter_token2] = aux_sym_command_parameter_token2,
  [aux_sym_command_parameter_token3] = aux_sym_command_parameter_token3,
  [anon_sym_call] = anon_sym_call,
  [anon_sym_cd] = anon_sym_cd,
  [anon_sym_checksum] = anon_sym_checksum,
  [anon_sym_chmod] = anon_sym_chmod,
  [anon_sym_close] = anon_sym_close,
  [anon_sym_cp] = anon_sym_cp,
  [anon_sym_echo] = anon_sym_echo,
  [anon_sym_exit] = anon_sym_exit,
  [anon_sym_get] = anon_sym_get,
  [anon_sym_help] = anon_sym_help,
  [anon_sym_keepuptodate] = anon_sym_keepuptodate,
  [anon_sym_lcd] = anon_sym_lcd,
  [anon_sym_lls] = anon_sym_lls,
  [anon_sym_ln] = anon_sym_ln,
  [anon_sym_lpwd] = anon_sym_lpwd,
  [anon_sym_ls] = anon_sym_ls,
  [anon_sym_mkdir] = anon_sym_mkdir,
  [anon_sym_mv] = anon_sym_mv,
  [anon_sym_open] = anon_sym_open,
  [anon_sym_option] = anon_sym_option,
  [anon_sym_put] = anon_sym_put,
  [anon_sym_pwd] = anon_sym_pwd,
  [anon_sym_rm] = anon_sym_rm,
  [anon_sym_rmdir] = anon_sym_rmdir,
  [anon_sym_session] = anon_sym_session,
  [anon_sym_stat] = anon_sym_stat,
  [anon_sym_synchronize] = anon_sym_synchronize,
  [sym_source_file] = sym_source_file,
  [sym__line] = sym__line,
  [sym_comment] = sym_comment,
  [sym_env_variable] = sym_env_variable,
  [sym_command] = sym_command,
  [sym_command_switch] = sym_command_switch,
  [sym_command_parameter] = sym_command_parameter,
  [sym_command_name] = sym_command_name,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_command_repeat1] = aux_sym_command_repeat1,
  [aux_sym_command_repeat2] = aux_sym_command_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_continue_line] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_env_variable_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_command_switch_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_command_parameter_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_command_parameter_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_parameter_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_call] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_checksum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_chmod] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_close] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_echo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_get] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_help] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_keepuptodate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lcd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lls] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ln] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lpwd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ls] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mkdir] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_open] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_option] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_put] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pwd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rm] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rmdir] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_session] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_synchronize] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_env_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym_command_switch] = {
    .visible = true,
    .named = true,
  },
  [sym_command_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_command_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_repeat2] = {
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
  [14] = 9,
  [15] = 11,
  [16] = 16,
  [17] = 17,
  [18] = 12,
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
  [33] = 26,
  [34] = 30,
  [35] = 29,
  [36] = 24,
  [37] = 27,
  [38] = 28,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(81);
      if (lookahead == '"') ADVANCE(95);
      if (lookahead == '#') ADVANCE(82);
      if (lookahead == '%') ADVANCE(86);
      if (lookahead == '\'') ADVANCE(92);
      if (lookahead == '-') ADVANCE(88);
      if (lookahead == '/') ADVANCE(89);
      if (lookahead == '=') ADVANCE(91);
      if (lookahead == '^') ADVANCE(85);
      if (lookahead == 'c') ADVANCE(98);
      if (lookahead == 'e') ADVANCE(101);
      if (lookahead == 'g') ADVANCE(111);
      if (lookahead == 'h') ADVANCE(116);
      if (lookahead == 'k') ADVANCE(120);
      if (lookahead == 'l') ADVANCE(102);
      if (lookahead == 'm') ADVANCE(129);
      if (lookahead == 'o') ADVANCE(148);
      if (lookahead == 'p') ADVANCE(167);
      if (lookahead == 'r') ADVANCE(134);
      if (lookahead == 's') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(95);
      if (lookahead == '%') ADVANCE(86);
      if (lookahead == '\'') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(97);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(94);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(39);
      if (lookahead == 'd') ADVANCE(174);
      if (lookahead == 'h') ADVANCE(18);
      if (lookahead == 'l') ADVANCE(48);
      if (lookahead == 'p') ADVANCE(182);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 7:
      if (lookahead == 'c') ADVANCE(27);
      if (lookahead == 'x') ADVANCE(32);
      END_STATE();
    case 8:
      if (lookahead == 'c') ADVANCE(11);
      if (lookahead == 'l') ADVANCE(61);
      if (lookahead == 'n') ADVANCE(198);
      if (lookahead == 'p') ADVANCE(75);
      if (lookahead == 's') ADVANCE(202);
      END_STATE();
    case 9:
      if (lookahead == 'c') ADVANCE(36);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(28);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(194);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(214);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(200);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(178);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(29);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(6);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(9);
      if (lookahead == 'm') ADVANCE(51);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(63);
      if (lookahead == 't') ADVANCE(5);
      if (lookahead == 'y') ADVANCE(45);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(42);
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 27:
      if (lookahead == 'h') ADVANCE(47);
      END_STATE();
    case 28:
      if (lookahead == 'h') ADVANCE(60);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 35:
      if (lookahead == 'k') ADVANCE(15);
      if (lookahead == 'v') ADVANCE(206);
      END_STATE();
    case 36:
      if (lookahead == 'k') ADVANCE(62);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(172);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 40:
      if (lookahead == 'm') ADVANCE(217);
      END_STATE();
    case 41:
      if (lookahead == 'm') ADVANCE(176);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(208);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(210);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(220);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(184);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 54:
      if (lookahead == 'p') ADVANCE(24);
      END_STATE();
    case 55:
      if (lookahead == 'p') ADVANCE(190);
      END_STATE();
    case 56:
      if (lookahead == 'p') ADVANCE(74);
      END_STATE();
    case 57:
      if (lookahead == 'p') ADVANCE(71);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(204);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(218);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 61:
      if (lookahead == 's') ADVANCE(196);
      END_STATE();
    case 62:
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 63:
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 64:
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(188);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(212);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(186);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(222);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 72:
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 73:
      if (lookahead == 'u') ADVANCE(67);
      if (lookahead == 'w') ADVANCE(12);
      END_STATE();
    case 74:
      if (lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 75:
      if (lookahead == 'w') ADVANCE(13);
      END_STATE();
    case 76:
      if (lookahead == 'z') ADVANCE(20);
      END_STATE();
    case 77:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(77)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 78:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(78)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 79:
      if (eof) ADVANCE(81);
      if (lookahead == '"') ADVANCE(95);
      if (lookahead == '#') ADVANCE(82);
      if (lookahead == '%') ADVANCE(86);
      if (lookahead == '\'') ADVANCE(92);
      if (lookahead == '^') ADVANCE(85);
      if (lookahead == 'c') ADVANCE(98);
      if (lookahead == 'e') ADVANCE(101);
      if (lookahead == 'g') ADVANCE(111);
      if (lookahead == 'h') ADVANCE(116);
      if (lookahead == 'k') ADVANCE(120);
      if (lookahead == 'l') ADVANCE(102);
      if (lookahead == 'm') ADVANCE(129);
      if (lookahead == 'o') ADVANCE(148);
      if (lookahead == 'p') ADVANCE(167);
      if (lookahead == 'r') ADVANCE(134);
      if (lookahead == 's') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(79)
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 80:
      if (eof) ADVANCE(81);
      if (lookahead == '#') ADVANCE(82);
      if (lookahead == 'c') ADVANCE(4);
      if (lookahead == 'e') ADVANCE(7);
      if (lookahead == 'g') ADVANCE(17);
      if (lookahead == 'h') ADVANCE(22);
      if (lookahead == 'k') ADVANCE(26);
      if (lookahead == 'l') ADVANCE(8);
      if (lookahead == 'm') ADVANCE(35);
      if (lookahead == 'o') ADVANCE(54);
      if (lookahead == 'p') ADVANCE(73);
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == 's') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(80)
      END_STATE();
    case 81:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_continue_line);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_env_variable_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_command_parameter_token1);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(93);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_command_parameter_token1);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_command_parameter_token2);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(96);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_command_parameter_token2);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'a') ADVANCE(133);
      if (lookahead == 'd') ADVANCE(175);
      if (lookahead == 'h') ADVANCE(112);
      if (lookahead == 'l') ADVANCE(142);
      if (lookahead == 'p') ADVANCE(183);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'a') ADVANCE(163);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'a') ADVANCE(164);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'c') ADVANCE(121);
      if (lookahead == 'x') ADVANCE(126);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'c') ADVANCE(105);
      if (lookahead == 'l') ADVANCE(155);
      if (lookahead == 'n') ADVANCE(199);
      if (lookahead == 'p') ADVANCE(169);
      if (lookahead == 's') ADVANCE(203);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'c') ADVANCE(130);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'c') ADVANCE(122);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'd') ADVANCE(195);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'd') ADVANCE(215);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'd') ADVANCE(201);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'd') ADVANCE(179);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'd') ADVANCE(123);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'd') ADVANCE(100);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'e') ADVANCE(160);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'e') ADVANCE(103);
      if (lookahead == 'm') ADVANCE(145);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'e') ADVANCE(181);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'e') ADVANCE(225);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'e') ADVANCE(193);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'e') ADVANCE(132);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'e') ADVANCE(157);
      if (lookahead == 't') ADVANCE(99);
      if (lookahead == 'y') ADVANCE(139);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'e') ADVANCE(136);
      if (lookahead == 't') ADVANCE(127);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'e') ADVANCE(150);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'e') ADVANCE(119);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'h') ADVANCE(141);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'h') ADVANCE(154);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'i') ADVANCE(152);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'i') ADVANCE(170);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'i') ADVANCE(153);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'i') ADVANCE(162);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'i') ADVANCE(143);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'i') ADVANCE(144);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'k') ADVANCE(109);
      if (lookahead == 'v') ADVANCE(207);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'k') ADVANCE(156);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'l') ADVANCE(173);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'l') ADVANCE(149);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'l') ADVANCE(131);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'm') ADVANCE(216);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'm') ADVANCE(177);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'n') ADVANCE(209);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'n') ADVANCE(211);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'n') ADVANCE(221);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'n') ADVANCE(104);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'n') ADVANCE(124);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'o') ADVANCE(185);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'o') ADVANCE(158);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'o') ADVANCE(137);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'o') ADVANCE(138);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'o') ADVANCE(108);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'o') ADVANCE(140);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'o') ADVANCE(110);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'p') ADVANCE(118);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'p') ADVANCE(191);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'p') ADVANCE(168);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'p') ADVANCE(165);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'r') ADVANCE(205);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'r') ADVANCE(219);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'r') ADVANCE(146);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 's') ADVANCE(197);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 's') ADVANCE(166);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 's') ADVANCE(159);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 's') ADVANCE(113);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 's') ADVANCE(128);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 't') ADVANCE(189);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 't') ADVANCE(213);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 't') ADVANCE(187);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 't') ADVANCE(223);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 't') ADVANCE(115);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 't') ADVANCE(147);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'u') ADVANCE(135);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'u') ADVANCE(161);
      if (lookahead == 'w') ADVANCE(106);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'u') ADVANCE(151);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'w') ADVANCE(107);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'z') ADVANCE(114);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(171);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_call);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_cd);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_cd);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_checksum);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_checksum);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_chmod);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_chmod);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_close);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_close);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_cp);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_cp);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_echo);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_echo);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_exit);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_exit);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_get);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_get);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_help);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_help);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_keepuptodate);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_keepuptodate);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_lcd);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_lcd);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_lls);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_lls);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_ln);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_ln);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_lpwd);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_lpwd);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_ls);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_ls);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_mkdir);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_mkdir);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_mv);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_mv);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_open);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_open);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_option);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_option);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_put);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_put);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_pwd);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_pwd);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_rm);
      if (lookahead == 'd') ADVANCE(125);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_rm);
      if (lookahead == 'd') ADVANCE(31);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_rmdir);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_rmdir);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_session);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_session);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_stat);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_stat);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_synchronize);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_synchronize);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 80},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 79},
  [6] = {.lex_state = 79},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 79},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 79},
  [15] = {.lex_state = 79},
  [16] = {.lex_state = 80},
  [17] = {.lex_state = 80},
  [18] = {.lex_state = 79},
  [19] = {.lex_state = 80},
  [20] = {.lex_state = 80},
  [21] = {.lex_state = 80},
  [22] = {.lex_state = 80},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 77},
  [25] = {.lex_state = 78},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 93},
  [28] = {.lex_state = 96},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 83},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 77},
  [37] = {.lex_state = 93},
  [38] = {.lex_state = 96},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [sym_continue_line] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_command_parameter_token3] = ACTIONS(1),
    [anon_sym_call] = ACTIONS(1),
    [anon_sym_cd] = ACTIONS(1),
    [anon_sym_checksum] = ACTIONS(1),
    [anon_sym_chmod] = ACTIONS(1),
    [anon_sym_close] = ACTIONS(1),
    [anon_sym_cp] = ACTIONS(1),
    [anon_sym_echo] = ACTIONS(1),
    [anon_sym_exit] = ACTIONS(1),
    [anon_sym_get] = ACTIONS(1),
    [anon_sym_help] = ACTIONS(1),
    [anon_sym_keepuptodate] = ACTIONS(1),
    [anon_sym_lcd] = ACTIONS(1),
    [anon_sym_lls] = ACTIONS(1),
    [anon_sym_ln] = ACTIONS(1),
    [anon_sym_lpwd] = ACTIONS(1),
    [anon_sym_ls] = ACTIONS(1),
    [anon_sym_mkdir] = ACTIONS(1),
    [anon_sym_mv] = ACTIONS(1),
    [anon_sym_open] = ACTIONS(1),
    [anon_sym_option] = ACTIONS(1),
    [anon_sym_put] = ACTIONS(1),
    [anon_sym_pwd] = ACTIONS(1),
    [anon_sym_rm] = ACTIONS(1),
    [anon_sym_rmdir] = ACTIONS(1),
    [anon_sym_session] = ACTIONS(1),
    [anon_sym_stat] = ACTIONS(1),
    [anon_sym_synchronize] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(32),
    [sym__line] = STATE(17),
    [sym_comment] = STATE(17),
    [sym_command] = STATE(17),
    [sym_command_name] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
    [anon_sym_call] = ACTIONS(7),
    [anon_sym_cd] = ACTIONS(7),
    [anon_sym_checksum] = ACTIONS(7),
    [anon_sym_chmod] = ACTIONS(7),
    [anon_sym_close] = ACTIONS(7),
    [anon_sym_cp] = ACTIONS(7),
    [anon_sym_echo] = ACTIONS(7),
    [anon_sym_exit] = ACTIONS(7),
    [anon_sym_get] = ACTIONS(7),
    [anon_sym_help] = ACTIONS(7),
    [anon_sym_keepuptodate] = ACTIONS(7),
    [anon_sym_lcd] = ACTIONS(7),
    [anon_sym_lls] = ACTIONS(7),
    [anon_sym_ln] = ACTIONS(7),
    [anon_sym_lpwd] = ACTIONS(7),
    [anon_sym_ls] = ACTIONS(7),
    [anon_sym_mkdir] = ACTIONS(7),
    [anon_sym_mv] = ACTIONS(7),
    [anon_sym_open] = ACTIONS(7),
    [anon_sym_option] = ACTIONS(7),
    [anon_sym_put] = ACTIONS(7),
    [anon_sym_pwd] = ACTIONS(7),
    [anon_sym_rm] = ACTIONS(9),
    [anon_sym_rmdir] = ACTIONS(7),
    [anon_sym_session] = ACTIONS(7),
    [anon_sym_stat] = ACTIONS(7),
    [anon_sym_synchronize] = ACTIONS(7),
  },
  [2] = {
    [sym_env_variable] = STATE(18),
    [sym_command_switch] = STATE(4),
    [sym_command_parameter] = STATE(6),
    [aux_sym_command_repeat1] = STATE(4),
    [aux_sym_command_repeat2] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_POUND] = ACTIONS(11),
    [sym_continue_line] = ACTIONS(13),
    [anon_sym_PERCENT] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_SLASH] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [aux_sym_command_parameter_token3] = ACTIONS(25),
    [anon_sym_call] = ACTIONS(27),
    [anon_sym_cd] = ACTIONS(27),
    [anon_sym_checksum] = ACTIONS(27),
    [anon_sym_chmod] = ACTIONS(27),
    [anon_sym_close] = ACTIONS(27),
    [anon_sym_cp] = ACTIONS(27),
    [anon_sym_echo] = ACTIONS(27),
    [anon_sym_exit] = ACTIONS(27),
    [anon_sym_get] = ACTIONS(27),
    [anon_sym_help] = ACTIONS(27),
    [anon_sym_keepuptodate] = ACTIONS(27),
    [anon_sym_lcd] = ACTIONS(27),
    [anon_sym_lls] = ACTIONS(27),
    [anon_sym_ln] = ACTIONS(27),
    [anon_sym_lpwd] = ACTIONS(27),
    [anon_sym_ls] = ACTIONS(27),
    [anon_sym_mkdir] = ACTIONS(27),
    [anon_sym_mv] = ACTIONS(27),
    [anon_sym_open] = ACTIONS(27),
    [anon_sym_option] = ACTIONS(27),
    [anon_sym_put] = ACTIONS(27),
    [anon_sym_pwd] = ACTIONS(27),
    [anon_sym_rm] = ACTIONS(27),
    [anon_sym_rmdir] = ACTIONS(27),
    [anon_sym_session] = ACTIONS(27),
    [anon_sym_stat] = ACTIONS(27),
    [anon_sym_synchronize] = ACTIONS(27),
  },
  [3] = {
    [sym_env_variable] = STATE(18),
    [sym_command_switch] = STATE(2),
    [sym_command_parameter] = STATE(8),
    [aux_sym_command_repeat1] = STATE(2),
    [aux_sym_command_repeat2] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_POUND] = ACTIONS(29),
    [sym_continue_line] = ACTIONS(31),
    [anon_sym_PERCENT] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_SLASH] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [aux_sym_command_parameter_token3] = ACTIONS(25),
    [anon_sym_call] = ACTIONS(33),
    [anon_sym_cd] = ACTIONS(33),
    [anon_sym_checksum] = ACTIONS(33),
    [anon_sym_chmod] = ACTIONS(33),
    [anon_sym_close] = ACTIONS(33),
    [anon_sym_cp] = ACTIONS(33),
    [anon_sym_echo] = ACTIONS(33),
    [anon_sym_exit] = ACTIONS(33),
    [anon_sym_get] = ACTIONS(33),
    [anon_sym_help] = ACTIONS(33),
    [anon_sym_keepuptodate] = ACTIONS(33),
    [anon_sym_lcd] = ACTIONS(33),
    [anon_sym_lls] = ACTIONS(33),
    [anon_sym_ln] = ACTIONS(33),
    [anon_sym_lpwd] = ACTIONS(33),
    [anon_sym_ls] = ACTIONS(33),
    [anon_sym_mkdir] = ACTIONS(33),
    [anon_sym_mv] = ACTIONS(33),
    [anon_sym_open] = ACTIONS(33),
    [anon_sym_option] = ACTIONS(33),
    [anon_sym_put] = ACTIONS(33),
    [anon_sym_pwd] = ACTIONS(33),
    [anon_sym_rm] = ACTIONS(33),
    [anon_sym_rmdir] = ACTIONS(33),
    [anon_sym_session] = ACTIONS(33),
    [anon_sym_stat] = ACTIONS(33),
    [anon_sym_synchronize] = ACTIONS(33),
  },
  [4] = {
    [sym_command_switch] = STATE(4),
    [aux_sym_command_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(35),
    [anon_sym_POUND] = ACTIONS(35),
    [sym_continue_line] = ACTIONS(35),
    [anon_sym_PERCENT] = ACTIONS(35),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_SLASH] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [aux_sym_command_parameter_token3] = ACTIONS(43),
    [anon_sym_call] = ACTIONS(43),
    [anon_sym_cd] = ACTIONS(43),
    [anon_sym_checksum] = ACTIONS(43),
    [anon_sym_chmod] = ACTIONS(43),
    [anon_sym_close] = ACTIONS(43),
    [anon_sym_cp] = ACTIONS(43),
    [anon_sym_echo] = ACTIONS(43),
    [anon_sym_exit] = ACTIONS(43),
    [anon_sym_get] = ACTIONS(43),
    [anon_sym_help] = ACTIONS(43),
    [anon_sym_keepuptodate] = ACTIONS(43),
    [anon_sym_lcd] = ACTIONS(43),
    [anon_sym_lls] = ACTIONS(43),
    [anon_sym_ln] = ACTIONS(43),
    [anon_sym_lpwd] = ACTIONS(43),
    [anon_sym_ls] = ACTIONS(43),
    [anon_sym_mkdir] = ACTIONS(43),
    [anon_sym_mv] = ACTIONS(43),
    [anon_sym_open] = ACTIONS(43),
    [anon_sym_option] = ACTIONS(43),
    [anon_sym_put] = ACTIONS(43),
    [anon_sym_pwd] = ACTIONS(43),
    [anon_sym_rm] = ACTIONS(43),
    [anon_sym_rmdir] = ACTIONS(43),
    [anon_sym_session] = ACTIONS(43),
    [anon_sym_stat] = ACTIONS(43),
    [anon_sym_synchronize] = ACTIONS(43),
  },
  [5] = {
    [sym_env_variable] = STATE(18),
    [sym_command_parameter] = STATE(5),
    [aux_sym_command_repeat2] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(45),
    [sym_continue_line] = ACTIONS(45),
    [anon_sym_PERCENT] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(50),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [aux_sym_command_parameter_token3] = ACTIONS(56),
    [anon_sym_call] = ACTIONS(59),
    [anon_sym_cd] = ACTIONS(59),
    [anon_sym_checksum] = ACTIONS(59),
    [anon_sym_chmod] = ACTIONS(59),
    [anon_sym_close] = ACTIONS(59),
    [anon_sym_cp] = ACTIONS(59),
    [anon_sym_echo] = ACTIONS(59),
    [anon_sym_exit] = ACTIONS(59),
    [anon_sym_get] = ACTIONS(59),
    [anon_sym_help] = ACTIONS(59),
    [anon_sym_keepuptodate] = ACTIONS(59),
    [anon_sym_lcd] = ACTIONS(59),
    [anon_sym_lls] = ACTIONS(59),
    [anon_sym_ln] = ACTIONS(59),
    [anon_sym_lpwd] = ACTIONS(59),
    [anon_sym_ls] = ACTIONS(59),
    [anon_sym_mkdir] = ACTIONS(59),
    [anon_sym_mv] = ACTIONS(59),
    [anon_sym_open] = ACTIONS(59),
    [anon_sym_option] = ACTIONS(59),
    [anon_sym_put] = ACTIONS(59),
    [anon_sym_pwd] = ACTIONS(59),
    [anon_sym_rm] = ACTIONS(59),
    [anon_sym_rmdir] = ACTIONS(59),
    [anon_sym_session] = ACTIONS(59),
    [anon_sym_stat] = ACTIONS(59),
    [anon_sym_synchronize] = ACTIONS(59),
  },
  [6] = {
    [sym_env_variable] = STATE(18),
    [sym_command_parameter] = STATE(5),
    [aux_sym_command_repeat2] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(61),
    [anon_sym_POUND] = ACTIONS(61),
    [sym_continue_line] = ACTIONS(63),
    [anon_sym_PERCENT] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [aux_sym_command_parameter_token3] = ACTIONS(25),
    [anon_sym_call] = ACTIONS(65),
    [anon_sym_cd] = ACTIONS(65),
    [anon_sym_checksum] = ACTIONS(65),
    [anon_sym_chmod] = ACTIONS(65),
    [anon_sym_close] = ACTIONS(65),
    [anon_sym_cp] = ACTIONS(65),
    [anon_sym_echo] = ACTIONS(65),
    [anon_sym_exit] = ACTIONS(65),
    [anon_sym_get] = ACTIONS(65),
    [anon_sym_help] = ACTIONS(65),
    [anon_sym_keepuptodate] = ACTIONS(65),
    [anon_sym_lcd] = ACTIONS(65),
    [anon_sym_lls] = ACTIONS(65),
    [anon_sym_ln] = ACTIONS(65),
    [anon_sym_lpwd] = ACTIONS(65),
    [anon_sym_ls] = ACTIONS(65),
    [anon_sym_mkdir] = ACTIONS(65),
    [anon_sym_mv] = ACTIONS(65),
    [anon_sym_open] = ACTIONS(65),
    [anon_sym_option] = ACTIONS(65),
    [anon_sym_put] = ACTIONS(65),
    [anon_sym_pwd] = ACTIONS(65),
    [anon_sym_rm] = ACTIONS(65),
    [anon_sym_rmdir] = ACTIONS(65),
    [anon_sym_session] = ACTIONS(65),
    [anon_sym_stat] = ACTIONS(65),
    [anon_sym_synchronize] = ACTIONS(65),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(67),
    [anon_sym_POUND] = ACTIONS(67),
    [sym_continue_line] = ACTIONS(67),
    [anon_sym_PERCENT] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_SLASH] = ACTIONS(69),
    [anon_sym_EQ] = ACTIONS(71),
    [anon_sym_SQUOTE] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(67),
    [aux_sym_command_parameter_token3] = ACTIONS(69),
    [anon_sym_call] = ACTIONS(69),
    [anon_sym_cd] = ACTIONS(69),
    [anon_sym_checksum] = ACTIONS(69),
    [anon_sym_chmod] = ACTIONS(69),
    [anon_sym_close] = ACTIONS(69),
    [anon_sym_cp] = ACTIONS(69),
    [anon_sym_echo] = ACTIONS(69),
    [anon_sym_exit] = ACTIONS(69),
    [anon_sym_get] = ACTIONS(69),
    [anon_sym_help] = ACTIONS(69),
    [anon_sym_keepuptodate] = ACTIONS(69),
    [anon_sym_lcd] = ACTIONS(69),
    [anon_sym_lls] = ACTIONS(69),
    [anon_sym_ln] = ACTIONS(69),
    [anon_sym_lpwd] = ACTIONS(69),
    [anon_sym_ls] = ACTIONS(69),
    [anon_sym_mkdir] = ACTIONS(69),
    [anon_sym_mv] = ACTIONS(69),
    [anon_sym_open] = ACTIONS(69),
    [anon_sym_option] = ACTIONS(69),
    [anon_sym_put] = ACTIONS(69),
    [anon_sym_pwd] = ACTIONS(69),
    [anon_sym_rm] = ACTIONS(69),
    [anon_sym_rmdir] = ACTIONS(69),
    [anon_sym_session] = ACTIONS(69),
    [anon_sym_stat] = ACTIONS(69),
    [anon_sym_synchronize] = ACTIONS(69),
  },
  [8] = {
    [sym_env_variable] = STATE(18),
    [sym_command_parameter] = STATE(5),
    [aux_sym_command_repeat2] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_POUND] = ACTIONS(11),
    [sym_continue_line] = ACTIONS(13),
    [anon_sym_PERCENT] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [aux_sym_command_parameter_token3] = ACTIONS(25),
    [anon_sym_call] = ACTIONS(27),
    [anon_sym_cd] = ACTIONS(27),
    [anon_sym_checksum] = ACTIONS(27),
    [anon_sym_chmod] = ACTIONS(27),
    [anon_sym_close] = ACTIONS(27),
    [anon_sym_cp] = ACTIONS(27),
    [anon_sym_echo] = ACTIONS(27),
    [anon_sym_exit] = ACTIONS(27),
    [anon_sym_get] = ACTIONS(27),
    [anon_sym_help] = ACTIONS(27),
    [anon_sym_keepuptodate] = ACTIONS(27),
    [anon_sym_lcd] = ACTIONS(27),
    [anon_sym_lls] = ACTIONS(27),
    [anon_sym_ln] = ACTIONS(27),
    [anon_sym_lpwd] = ACTIONS(27),
    [anon_sym_ls] = ACTIONS(27),
    [anon_sym_mkdir] = ACTIONS(27),
    [anon_sym_mv] = ACTIONS(27),
    [anon_sym_open] = ACTIONS(27),
    [anon_sym_option] = ACTIONS(27),
    [anon_sym_put] = ACTIONS(27),
    [anon_sym_pwd] = ACTIONS(27),
    [anon_sym_rm] = ACTIONS(27),
    [anon_sym_rmdir] = ACTIONS(27),
    [anon_sym_session] = ACTIONS(27),
    [anon_sym_stat] = ACTIONS(27),
    [anon_sym_synchronize] = ACTIONS(27),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(73),
    [anon_sym_POUND] = ACTIONS(73),
    [sym_continue_line] = ACTIONS(73),
    [anon_sym_PERCENT] = ACTIONS(73),
    [anon_sym_DASH] = ACTIONS(73),
    [anon_sym_SLASH] = ACTIONS(75),
    [anon_sym_SQUOTE] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [aux_sym_command_parameter_token3] = ACTIONS(75),
    [anon_sym_call] = ACTIONS(75),
    [anon_sym_cd] = ACTIONS(75),
    [anon_sym_checksum] = ACTIONS(75),
    [anon_sym_chmod] = ACTIONS(75),
    [anon_sym_close] = ACTIONS(75),
    [anon_sym_cp] = ACTIONS(75),
    [anon_sym_echo] = ACTIONS(75),
    [anon_sym_exit] = ACTIONS(75),
    [anon_sym_get] = ACTIONS(75),
    [anon_sym_help] = ACTIONS(75),
    [anon_sym_keepuptodate] = ACTIONS(75),
    [anon_sym_lcd] = ACTIONS(75),
    [anon_sym_lls] = ACTIONS(75),
    [anon_sym_ln] = ACTIONS(75),
    [anon_sym_lpwd] = ACTIONS(75),
    [anon_sym_ls] = ACTIONS(75),
    [anon_sym_mkdir] = ACTIONS(75),
    [anon_sym_mv] = ACTIONS(75),
    [anon_sym_open] = ACTIONS(75),
    [anon_sym_option] = ACTIONS(75),
    [anon_sym_put] = ACTIONS(75),
    [anon_sym_pwd] = ACTIONS(75),
    [anon_sym_rm] = ACTIONS(75),
    [anon_sym_rmdir] = ACTIONS(75),
    [anon_sym_session] = ACTIONS(75),
    [anon_sym_stat] = ACTIONS(75),
    [anon_sym_synchronize] = ACTIONS(75),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(77),
    [anon_sym_POUND] = ACTIONS(77),
    [sym_continue_line] = ACTIONS(77),
    [anon_sym_PERCENT] = ACTIONS(77),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_SLASH] = ACTIONS(79),
    [anon_sym_SQUOTE] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [aux_sym_command_parameter_token3] = ACTIONS(79),
    [anon_sym_call] = ACTIONS(79),
    [anon_sym_cd] = ACTIONS(79),
    [anon_sym_checksum] = ACTIONS(79),
    [anon_sym_chmod] = ACTIONS(79),
    [anon_sym_close] = ACTIONS(79),
    [anon_sym_cp] = ACTIONS(79),
    [anon_sym_echo] = ACTIONS(79),
    [anon_sym_exit] = ACTIONS(79),
    [anon_sym_get] = ACTIONS(79),
    [anon_sym_help] = ACTIONS(79),
    [anon_sym_keepuptodate] = ACTIONS(79),
    [anon_sym_lcd] = ACTIONS(79),
    [anon_sym_lls] = ACTIONS(79),
    [anon_sym_ln] = ACTIONS(79),
    [anon_sym_lpwd] = ACTIONS(79),
    [anon_sym_ls] = ACTIONS(79),
    [anon_sym_mkdir] = ACTIONS(79),
    [anon_sym_mv] = ACTIONS(79),
    [anon_sym_open] = ACTIONS(79),
    [anon_sym_option] = ACTIONS(79),
    [anon_sym_put] = ACTIONS(79),
    [anon_sym_pwd] = ACTIONS(79),
    [anon_sym_rm] = ACTIONS(79),
    [anon_sym_rmdir] = ACTIONS(79),
    [anon_sym_session] = ACTIONS(79),
    [anon_sym_stat] = ACTIONS(79),
    [anon_sym_synchronize] = ACTIONS(79),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(81),
    [anon_sym_POUND] = ACTIONS(81),
    [sym_continue_line] = ACTIONS(81),
    [anon_sym_PERCENT] = ACTIONS(81),
    [anon_sym_DASH] = ACTIONS(81),
    [anon_sym_SLASH] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [aux_sym_command_parameter_token3] = ACTIONS(83),
    [anon_sym_call] = ACTIONS(83),
    [anon_sym_cd] = ACTIONS(83),
    [anon_sym_checksum] = ACTIONS(83),
    [anon_sym_chmod] = ACTIONS(83),
    [anon_sym_close] = ACTIONS(83),
    [anon_sym_cp] = ACTIONS(83),
    [anon_sym_echo] = ACTIONS(83),
    [anon_sym_exit] = ACTIONS(83),
    [anon_sym_get] = ACTIONS(83),
    [anon_sym_help] = ACTIONS(83),
    [anon_sym_keepuptodate] = ACTIONS(83),
    [anon_sym_lcd] = ACTIONS(83),
    [anon_sym_lls] = ACTIONS(83),
    [anon_sym_ln] = ACTIONS(83),
    [anon_sym_lpwd] = ACTIONS(83),
    [anon_sym_ls] = ACTIONS(83),
    [anon_sym_mkdir] = ACTIONS(83),
    [anon_sym_mv] = ACTIONS(83),
    [anon_sym_open] = ACTIONS(83),
    [anon_sym_option] = ACTIONS(83),
    [anon_sym_put] = ACTIONS(83),
    [anon_sym_pwd] = ACTIONS(83),
    [anon_sym_rm] = ACTIONS(83),
    [anon_sym_rmdir] = ACTIONS(83),
    [anon_sym_session] = ACTIONS(83),
    [anon_sym_stat] = ACTIONS(83),
    [anon_sym_synchronize] = ACTIONS(83),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(85),
    [anon_sym_POUND] = ACTIONS(85),
    [sym_continue_line] = ACTIONS(85),
    [anon_sym_PERCENT] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_SLASH] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(85),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [aux_sym_command_parameter_token3] = ACTIONS(87),
    [anon_sym_call] = ACTIONS(87),
    [anon_sym_cd] = ACTIONS(87),
    [anon_sym_checksum] = ACTIONS(87),
    [anon_sym_chmod] = ACTIONS(87),
    [anon_sym_close] = ACTIONS(87),
    [anon_sym_cp] = ACTIONS(87),
    [anon_sym_echo] = ACTIONS(87),
    [anon_sym_exit] = ACTIONS(87),
    [anon_sym_get] = ACTIONS(87),
    [anon_sym_help] = ACTIONS(87),
    [anon_sym_keepuptodate] = ACTIONS(87),
    [anon_sym_lcd] = ACTIONS(87),
    [anon_sym_lls] = ACTIONS(87),
    [anon_sym_ln] = ACTIONS(87),
    [anon_sym_lpwd] = ACTIONS(87),
    [anon_sym_ls] = ACTIONS(87),
    [anon_sym_mkdir] = ACTIONS(87),
    [anon_sym_mv] = ACTIONS(87),
    [anon_sym_open] = ACTIONS(87),
    [anon_sym_option] = ACTIONS(87),
    [anon_sym_put] = ACTIONS(87),
    [anon_sym_pwd] = ACTIONS(87),
    [anon_sym_rm] = ACTIONS(87),
    [anon_sym_rmdir] = ACTIONS(87),
    [anon_sym_session] = ACTIONS(87),
    [anon_sym_stat] = ACTIONS(87),
    [anon_sym_synchronize] = ACTIONS(87),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(89),
    [anon_sym_POUND] = ACTIONS(89),
    [sym_continue_line] = ACTIONS(89),
    [anon_sym_PERCENT] = ACTIONS(89),
    [anon_sym_DASH] = ACTIONS(89),
    [anon_sym_SLASH] = ACTIONS(91),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [anon_sym_DQUOTE] = ACTIONS(89),
    [aux_sym_command_parameter_token3] = ACTIONS(91),
    [anon_sym_call] = ACTIONS(91),
    [anon_sym_cd] = ACTIONS(91),
    [anon_sym_checksum] = ACTIONS(91),
    [anon_sym_chmod] = ACTIONS(91),
    [anon_sym_close] = ACTIONS(91),
    [anon_sym_cp] = ACTIONS(91),
    [anon_sym_echo] = ACTIONS(91),
    [anon_sym_exit] = ACTIONS(91),
    [anon_sym_get] = ACTIONS(91),
    [anon_sym_help] = ACTIONS(91),
    [anon_sym_keepuptodate] = ACTIONS(91),
    [anon_sym_lcd] = ACTIONS(91),
    [anon_sym_lls] = ACTIONS(91),
    [anon_sym_ln] = ACTIONS(91),
    [anon_sym_lpwd] = ACTIONS(91),
    [anon_sym_ls] = ACTIONS(91),
    [anon_sym_mkdir] = ACTIONS(91),
    [anon_sym_mv] = ACTIONS(91),
    [anon_sym_open] = ACTIONS(91),
    [anon_sym_option] = ACTIONS(91),
    [anon_sym_put] = ACTIONS(91),
    [anon_sym_pwd] = ACTIONS(91),
    [anon_sym_rm] = ACTIONS(91),
    [anon_sym_rmdir] = ACTIONS(91),
    [anon_sym_session] = ACTIONS(91),
    [anon_sym_stat] = ACTIONS(91),
    [anon_sym_synchronize] = ACTIONS(91),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(73),
    [anon_sym_POUND] = ACTIONS(73),
    [sym_continue_line] = ACTIONS(73),
    [anon_sym_PERCENT] = ACTIONS(73),
    [anon_sym_SQUOTE] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [aux_sym_command_parameter_token3] = ACTIONS(75),
    [anon_sym_call] = ACTIONS(75),
    [anon_sym_cd] = ACTIONS(75),
    [anon_sym_checksum] = ACTIONS(75),
    [anon_sym_chmod] = ACTIONS(75),
    [anon_sym_close] = ACTIONS(75),
    [anon_sym_cp] = ACTIONS(75),
    [anon_sym_echo] = ACTIONS(75),
    [anon_sym_exit] = ACTIONS(75),
    [anon_sym_get] = ACTIONS(75),
    [anon_sym_help] = ACTIONS(75),
    [anon_sym_keepuptodate] = ACTIONS(75),
    [anon_sym_lcd] = ACTIONS(75),
    [anon_sym_lls] = ACTIONS(75),
    [anon_sym_ln] = ACTIONS(75),
    [anon_sym_lpwd] = ACTIONS(75),
    [anon_sym_ls] = ACTIONS(75),
    [anon_sym_mkdir] = ACTIONS(75),
    [anon_sym_mv] = ACTIONS(75),
    [anon_sym_open] = ACTIONS(75),
    [anon_sym_option] = ACTIONS(75),
    [anon_sym_put] = ACTIONS(75),
    [anon_sym_pwd] = ACTIONS(75),
    [anon_sym_rm] = ACTIONS(75),
    [anon_sym_rmdir] = ACTIONS(75),
    [anon_sym_session] = ACTIONS(75),
    [anon_sym_stat] = ACTIONS(75),
    [anon_sym_synchronize] = ACTIONS(75),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(81),
    [anon_sym_POUND] = ACTIONS(81),
    [sym_continue_line] = ACTIONS(81),
    [anon_sym_PERCENT] = ACTIONS(81),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [aux_sym_command_parameter_token3] = ACTIONS(83),
    [anon_sym_call] = ACTIONS(83),
    [anon_sym_cd] = ACTIONS(83),
    [anon_sym_checksum] = ACTIONS(83),
    [anon_sym_chmod] = ACTIONS(83),
    [anon_sym_close] = ACTIONS(83),
    [anon_sym_cp] = ACTIONS(83),
    [anon_sym_echo] = ACTIONS(83),
    [anon_sym_exit] = ACTIONS(83),
    [anon_sym_get] = ACTIONS(83),
    [anon_sym_help] = ACTIONS(83),
    [anon_sym_keepuptodate] = ACTIONS(83),
    [anon_sym_lcd] = ACTIONS(83),
    [anon_sym_lls] = ACTIONS(83),
    [anon_sym_ln] = ACTIONS(83),
    [anon_sym_lpwd] = ACTIONS(83),
    [anon_sym_ls] = ACTIONS(83),
    [anon_sym_mkdir] = ACTIONS(83),
    [anon_sym_mv] = ACTIONS(83),
    [anon_sym_open] = ACTIONS(83),
    [anon_sym_option] = ACTIONS(83),
    [anon_sym_put] = ACTIONS(83),
    [anon_sym_pwd] = ACTIONS(83),
    [anon_sym_rm] = ACTIONS(83),
    [anon_sym_rmdir] = ACTIONS(83),
    [anon_sym_session] = ACTIONS(83),
    [anon_sym_stat] = ACTIONS(83),
    [anon_sym_synchronize] = ACTIONS(83),
  },
  [16] = {
    [sym__line] = STATE(16),
    [sym_comment] = STATE(16),
    [sym_command] = STATE(16),
    [sym_command_name] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(93),
    [anon_sym_POUND] = ACTIONS(95),
    [anon_sym_call] = ACTIONS(98),
    [anon_sym_cd] = ACTIONS(98),
    [anon_sym_checksum] = ACTIONS(98),
    [anon_sym_chmod] = ACTIONS(98),
    [anon_sym_close] = ACTIONS(98),
    [anon_sym_cp] = ACTIONS(98),
    [anon_sym_echo] = ACTIONS(98),
    [anon_sym_exit] = ACTIONS(98),
    [anon_sym_get] = ACTIONS(98),
    [anon_sym_help] = ACTIONS(98),
    [anon_sym_keepuptodate] = ACTIONS(98),
    [anon_sym_lcd] = ACTIONS(98),
    [anon_sym_lls] = ACTIONS(98),
    [anon_sym_ln] = ACTIONS(98),
    [anon_sym_lpwd] = ACTIONS(98),
    [anon_sym_ls] = ACTIONS(98),
    [anon_sym_mkdir] = ACTIONS(98),
    [anon_sym_mv] = ACTIONS(98),
    [anon_sym_open] = ACTIONS(98),
    [anon_sym_option] = ACTIONS(98),
    [anon_sym_put] = ACTIONS(98),
    [anon_sym_pwd] = ACTIONS(98),
    [anon_sym_rm] = ACTIONS(101),
    [anon_sym_rmdir] = ACTIONS(98),
    [anon_sym_session] = ACTIONS(98),
    [anon_sym_stat] = ACTIONS(98),
    [anon_sym_synchronize] = ACTIONS(98),
  },
  [17] = {
    [sym__line] = STATE(16),
    [sym_comment] = STATE(16),
    [sym_command] = STATE(16),
    [sym_command_name] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(104),
    [anon_sym_POUND] = ACTIONS(5),
    [anon_sym_call] = ACTIONS(7),
    [anon_sym_cd] = ACTIONS(7),
    [anon_sym_checksum] = ACTIONS(7),
    [anon_sym_chmod] = ACTIONS(7),
    [anon_sym_close] = ACTIONS(7),
    [anon_sym_cp] = ACTIONS(7),
    [anon_sym_echo] = ACTIONS(7),
    [anon_sym_exit] = ACTIONS(7),
    [anon_sym_get] = ACTIONS(7),
    [anon_sym_help] = ACTIONS(7),
    [anon_sym_keepuptodate] = ACTIONS(7),
    [anon_sym_lcd] = ACTIONS(7),
    [anon_sym_lls] = ACTIONS(7),
    [anon_sym_ln] = ACTIONS(7),
    [anon_sym_lpwd] = ACTIONS(7),
    [anon_sym_ls] = ACTIONS(7),
    [anon_sym_mkdir] = ACTIONS(7),
    [anon_sym_mv] = ACTIONS(7),
    [anon_sym_open] = ACTIONS(7),
    [anon_sym_option] = ACTIONS(7),
    [anon_sym_put] = ACTIONS(7),
    [anon_sym_pwd] = ACTIONS(7),
    [anon_sym_rm] = ACTIONS(9),
    [anon_sym_rmdir] = ACTIONS(7),
    [anon_sym_session] = ACTIONS(7),
    [anon_sym_stat] = ACTIONS(7),
    [anon_sym_synchronize] = ACTIONS(7),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(85),
    [anon_sym_POUND] = ACTIONS(85),
    [sym_continue_line] = ACTIONS(85),
    [anon_sym_PERCENT] = ACTIONS(85),
    [anon_sym_SQUOTE] = ACTIONS(85),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [aux_sym_command_parameter_token3] = ACTIONS(87),
    [anon_sym_call] = ACTIONS(87),
    [anon_sym_cd] = ACTIONS(87),
    [anon_sym_checksum] = ACTIONS(87),
    [anon_sym_chmod] = ACTIONS(87),
    [anon_sym_close] = ACTIONS(87),
    [anon_sym_cp] = ACTIONS(87),
    [anon_sym_echo] = ACTIONS(87),
    [anon_sym_exit] = ACTIONS(87),
    [anon_sym_get] = ACTIONS(87),
    [anon_sym_help] = ACTIONS(87),
    [anon_sym_keepuptodate] = ACTIONS(87),
    [anon_sym_lcd] = ACTIONS(87),
    [anon_sym_lls] = ACTIONS(87),
    [anon_sym_ln] = ACTIONS(87),
    [anon_sym_lpwd] = ACTIONS(87),
    [anon_sym_ls] = ACTIONS(87),
    [anon_sym_mkdir] = ACTIONS(87),
    [anon_sym_mv] = ACTIONS(87),
    [anon_sym_open] = ACTIONS(87),
    [anon_sym_option] = ACTIONS(87),
    [anon_sym_put] = ACTIONS(87),
    [anon_sym_pwd] = ACTIONS(87),
    [anon_sym_rm] = ACTIONS(87),
    [anon_sym_rmdir] = ACTIONS(87),
    [anon_sym_session] = ACTIONS(87),
    [anon_sym_stat] = ACTIONS(87),
    [anon_sym_synchronize] = ACTIONS(87),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(106),
    [anon_sym_POUND] = ACTIONS(106),
    [anon_sym_call] = ACTIONS(106),
    [anon_sym_cd] = ACTIONS(106),
    [anon_sym_checksum] = ACTIONS(106),
    [anon_sym_chmod] = ACTIONS(106),
    [anon_sym_close] = ACTIONS(106),
    [anon_sym_cp] = ACTIONS(106),
    [anon_sym_echo] = ACTIONS(106),
    [anon_sym_exit] = ACTIONS(106),
    [anon_sym_get] = ACTIONS(106),
    [anon_sym_help] = ACTIONS(106),
    [anon_sym_keepuptodate] = ACTIONS(106),
    [anon_sym_lcd] = ACTIONS(106),
    [anon_sym_lls] = ACTIONS(106),
    [anon_sym_ln] = ACTIONS(106),
    [anon_sym_lpwd] = ACTIONS(106),
    [anon_sym_ls] = ACTIONS(106),
    [anon_sym_mkdir] = ACTIONS(106),
    [anon_sym_mv] = ACTIONS(106),
    [anon_sym_open] = ACTIONS(106),
    [anon_sym_option] = ACTIONS(106),
    [anon_sym_put] = ACTIONS(106),
    [anon_sym_pwd] = ACTIONS(106),
    [anon_sym_rm] = ACTIONS(108),
    [anon_sym_rmdir] = ACTIONS(106),
    [anon_sym_session] = ACTIONS(106),
    [anon_sym_stat] = ACTIONS(106),
    [anon_sym_synchronize] = ACTIONS(106),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_POUND] = ACTIONS(11),
    [anon_sym_call] = ACTIONS(11),
    [anon_sym_cd] = ACTIONS(11),
    [anon_sym_checksum] = ACTIONS(11),
    [anon_sym_chmod] = ACTIONS(11),
    [anon_sym_close] = ACTIONS(11),
    [anon_sym_cp] = ACTIONS(11),
    [anon_sym_echo] = ACTIONS(11),
    [anon_sym_exit] = ACTIONS(11),
    [anon_sym_get] = ACTIONS(11),
    [anon_sym_help] = ACTIONS(11),
    [anon_sym_keepuptodate] = ACTIONS(11),
    [anon_sym_lcd] = ACTIONS(11),
    [anon_sym_lls] = ACTIONS(11),
    [anon_sym_ln] = ACTIONS(11),
    [anon_sym_lpwd] = ACTIONS(11),
    [anon_sym_ls] = ACTIONS(11),
    [anon_sym_mkdir] = ACTIONS(11),
    [anon_sym_mv] = ACTIONS(11),
    [anon_sym_open] = ACTIONS(11),
    [anon_sym_option] = ACTIONS(11),
    [anon_sym_put] = ACTIONS(11),
    [anon_sym_pwd] = ACTIONS(11),
    [anon_sym_rm] = ACTIONS(27),
    [anon_sym_rmdir] = ACTIONS(11),
    [anon_sym_session] = ACTIONS(11),
    [anon_sym_stat] = ACTIONS(11),
    [anon_sym_synchronize] = ACTIONS(11),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(110),
    [anon_sym_POUND] = ACTIONS(110),
    [anon_sym_call] = ACTIONS(110),
    [anon_sym_cd] = ACTIONS(110),
    [anon_sym_checksum] = ACTIONS(110),
    [anon_sym_chmod] = ACTIONS(110),
    [anon_sym_close] = ACTIONS(110),
    [anon_sym_cp] = ACTIONS(110),
    [anon_sym_echo] = ACTIONS(110),
    [anon_sym_exit] = ACTIONS(110),
    [anon_sym_get] = ACTIONS(110),
    [anon_sym_help] = ACTIONS(110),
    [anon_sym_keepuptodate] = ACTIONS(110),
    [anon_sym_lcd] = ACTIONS(110),
    [anon_sym_lls] = ACTIONS(110),
    [anon_sym_ln] = ACTIONS(110),
    [anon_sym_lpwd] = ACTIONS(110),
    [anon_sym_ls] = ACTIONS(110),
    [anon_sym_mkdir] = ACTIONS(110),
    [anon_sym_mv] = ACTIONS(110),
    [anon_sym_open] = ACTIONS(110),
    [anon_sym_option] = ACTIONS(110),
    [anon_sym_put] = ACTIONS(110),
    [anon_sym_pwd] = ACTIONS(110),
    [anon_sym_rm] = ACTIONS(112),
    [anon_sym_rmdir] = ACTIONS(110),
    [anon_sym_session] = ACTIONS(110),
    [anon_sym_stat] = ACTIONS(110),
    [anon_sym_synchronize] = ACTIONS(110),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(61),
    [anon_sym_POUND] = ACTIONS(61),
    [anon_sym_call] = ACTIONS(61),
    [anon_sym_cd] = ACTIONS(61),
    [anon_sym_checksum] = ACTIONS(61),
    [anon_sym_chmod] = ACTIONS(61),
    [anon_sym_close] = ACTIONS(61),
    [anon_sym_cp] = ACTIONS(61),
    [anon_sym_echo] = ACTIONS(61),
    [anon_sym_exit] = ACTIONS(61),
    [anon_sym_get] = ACTIONS(61),
    [anon_sym_help] = ACTIONS(61),
    [anon_sym_keepuptodate] = ACTIONS(61),
    [anon_sym_lcd] = ACTIONS(61),
    [anon_sym_lls] = ACTIONS(61),
    [anon_sym_ln] = ACTIONS(61),
    [anon_sym_lpwd] = ACTIONS(61),
    [anon_sym_ls] = ACTIONS(61),
    [anon_sym_mkdir] = ACTIONS(61),
    [anon_sym_mv] = ACTIONS(61),
    [anon_sym_open] = ACTIONS(61),
    [anon_sym_option] = ACTIONS(61),
    [anon_sym_put] = ACTIONS(61),
    [anon_sym_pwd] = ACTIONS(61),
    [anon_sym_rm] = ACTIONS(65),
    [anon_sym_rmdir] = ACTIONS(61),
    [anon_sym_session] = ACTIONS(61),
    [anon_sym_stat] = ACTIONS(61),
    [anon_sym_synchronize] = ACTIONS(61),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(114), 1,
      anon_sym_PERCENT,
    ACTIONS(116), 1,
      anon_sym_SQUOTE,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      aux_sym_command_parameter_token3,
    STATE(12), 1,
      sym_env_variable,
    STATE(13), 1,
      sym_command_parameter,
  [19] = 1,
    ACTIONS(122), 1,
      aux_sym_env_variable_token1,
  [23] = 1,
    ACTIONS(124), 1,
      aux_sym_command_switch_token1,
  [27] = 1,
    ACTIONS(126), 1,
      anon_sym_PERCENT,
  [31] = 1,
    ACTIONS(128), 1,
      aux_sym_command_parameter_token1,
  [35] = 1,
    ACTIONS(130), 1,
      aux_sym_command_parameter_token2,
  [39] = 1,
    ACTIONS(132), 1,
      anon_sym_DQUOTE,
  [43] = 1,
    ACTIONS(132), 1,
      anon_sym_SQUOTE,
  [47] = 1,
    ACTIONS(134), 1,
      aux_sym_comment_token1,
  [51] = 1,
    ACTIONS(136), 1,
      ts_builtin_sym_end,
  [55] = 1,
    ACTIONS(138), 1,
      anon_sym_PERCENT,
  [59] = 1,
    ACTIONS(140), 1,
      anon_sym_SQUOTE,
  [63] = 1,
    ACTIONS(140), 1,
      anon_sym_DQUOTE,
  [67] = 1,
    ACTIONS(142), 1,
      aux_sym_env_variable_token1,
  [71] = 1,
    ACTIONS(144), 1,
      aux_sym_command_parameter_token1,
  [75] = 1,
    ACTIONS(146), 1,
      aux_sym_command_parameter_token2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(23)] = 0,
  [SMALL_STATE(24)] = 19,
  [SMALL_STATE(25)] = 23,
  [SMALL_STATE(26)] = 27,
  [SMALL_STATE(27)] = 31,
  [SMALL_STATE(28)] = 35,
  [SMALL_STATE(29)] = 39,
  [SMALL_STATE(30)] = 43,
  [SMALL_STATE(31)] = 47,
  [SMALL_STATE(32)] = 51,
  [SMALL_STATE(33)] = 55,
  [SMALL_STATE(34)] = 59,
  [SMALL_STATE(35)] = 63,
  [SMALL_STATE(36)] = 67,
  [SMALL_STATE(37)] = 71,
  [SMALL_STATE(38)] = 75,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(25),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(25),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(24),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(27),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(28),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(18),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_switch, 2),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_switch, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_parameter, 3),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_parameter, 3),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_name, 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_name, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_variable, 3),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_variable, 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_parameter, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_parameter, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_switch, 4),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_switch, 4),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(31),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 4),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [136] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_WinSCP(void) {
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
