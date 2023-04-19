#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 24
#define LARGE_STATE_COUNT 16
#define SYMBOL_COUNT 48
#define ALIAS_COUNT 0
#define TOKEN_COUNT 38
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_POUND = 1,
  aux_sym_comment_token1 = 2,
  anon_sym_DASH = 3,
  aux_sym_command_switch_token1 = 4,
  anon_sym_EQ = 5,
  anon_sym_SQUOTE = 6,
  aux_sym_command_parameter_token1 = 7,
  anon_sym_DQUOTE = 8,
  aux_sym_command_parameter_token2 = 9,
  aux_sym_command_parameter_token3 = 10,
  anon_sym_call = 11,
  anon_sym_cd = 12,
  anon_sym_checksum = 13,
  anon_sym_chmod = 14,
  anon_sym_close = 15,
  anon_sym_cp = 16,
  anon_sym_echo = 17,
  anon_sym_exit = 18,
  anon_sym_get = 19,
  anon_sym_help = 20,
  anon_sym_keepuptodate = 21,
  anon_sym_lcd = 22,
  anon_sym_lls = 23,
  anon_sym_ln = 24,
  anon_sym_lpwd = 25,
  anon_sym_ls = 26,
  anon_sym_mkdir = 27,
  anon_sym_mv = 28,
  anon_sym_open = 29,
  anon_sym_option = 30,
  anon_sym_put = 31,
  anon_sym_pwd = 32,
  anon_sym_rm = 33,
  anon_sym_rmdir = 34,
  anon_sym_session = 35,
  anon_sym_stat = 36,
  anon_sym_synchronize = 37,
  sym_source_file = 38,
  sym__line = 39,
  sym_comment = 40,
  sym_command = 41,
  sym_command_switch = 42,
  sym_command_parameter = 43,
  sym_command_name = 44,
  aux_sym_source_file_repeat1 = 45,
  aux_sym_command_repeat1 = 46,
  aux_sym_command_repeat2 = 47,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_DASH] = "-",
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
  [anon_sym_DASH] = anon_sym_DASH,
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
  [anon_sym_DASH] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(79);
      if (lookahead == '"') ADVANCE(89);
      if (lookahead == '#') ADVANCE(80);
      if (lookahead == '\'') ADVANCE(86);
      if (lookahead == '-') ADVANCE(83);
      if (lookahead == '=') ADVANCE(85);
      if (lookahead == 'c') ADVANCE(92);
      if (lookahead == 'e') ADVANCE(95);
      if (lookahead == 'g') ADVANCE(105);
      if (lookahead == 'h') ADVANCE(110);
      if (lookahead == 'k') ADVANCE(114);
      if (lookahead == 'l') ADVANCE(96);
      if (lookahead == 'm') ADVANCE(123);
      if (lookahead == 'o') ADVANCE(142);
      if (lookahead == 'p') ADVANCE(161);
      if (lookahead == 'r') ADVANCE(128);
      if (lookahead == 's') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(89);
      if (lookahead == '\'') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(91);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(88);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(39);
      if (lookahead == 'd') ADVANCE(168);
      if (lookahead == 'h') ADVANCE(18);
      if (lookahead == 'l') ADVANCE(48);
      if (lookahead == 'p') ADVANCE(176);
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
      if (lookahead == 'n') ADVANCE(192);
      if (lookahead == 'p') ADVANCE(75);
      if (lookahead == 's') ADVANCE(196);
      END_STATE();
    case 9:
      if (lookahead == 'c') ADVANCE(36);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(28);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(188);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(208);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(194);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(172);
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
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(186);
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
      if (lookahead == 'v') ADVANCE(200);
      END_STATE();
    case 36:
      if (lookahead == 'k') ADVANCE(62);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(166);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 40:
      if (lookahead == 'm') ADVANCE(211);
      END_STATE();
    case 41:
      if (lookahead == 'm') ADVANCE(170);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(202);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(204);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(214);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(178);
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
      if (lookahead == 'p') ADVANCE(184);
      END_STATE();
    case 56:
      if (lookahead == 'p') ADVANCE(74);
      END_STATE();
    case 57:
      if (lookahead == 'p') ADVANCE(71);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(212);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 61:
      if (lookahead == 's') ADVANCE(190);
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
      if (lookahead == 't') ADVANCE(182);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(206);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(180);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(216);
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
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 78:
      if (eof) ADVANCE(79);
      if (lookahead == '#') ADVANCE(80);
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
          lookahead == ' ') SKIP(78)
      END_STATE();
    case 79:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_command_parameter_token1);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(87);
      if (lookahead != 0) ADVANCE(88);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_command_parameter_token1);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead != 0) ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_command_parameter_token2);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_command_parameter_token2);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'a') ADVANCE(127);
      if (lookahead == 'd') ADVANCE(169);
      if (lookahead == 'h') ADVANCE(106);
      if (lookahead == 'l') ADVANCE(136);
      if (lookahead == 'p') ADVANCE(177);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'a') ADVANCE(157);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'a') ADVANCE(158);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'c') ADVANCE(115);
      if (lookahead == 'x') ADVANCE(120);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'c') ADVANCE(99);
      if (lookahead == 'l') ADVANCE(149);
      if (lookahead == 'n') ADVANCE(193);
      if (lookahead == 'p') ADVANCE(163);
      if (lookahead == 's') ADVANCE(197);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'c') ADVANCE(124);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'c') ADVANCE(116);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'd') ADVANCE(189);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'd') ADVANCE(209);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'd') ADVANCE(195);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'd') ADVANCE(173);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'd') ADVANCE(117);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'd') ADVANCE(94);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'e') ADVANCE(154);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'e') ADVANCE(97);
      if (lookahead == 'm') ADVANCE(139);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'e') ADVANCE(175);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'e') ADVANCE(219);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'e') ADVANCE(187);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'e') ADVANCE(126);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'e') ADVANCE(151);
      if (lookahead == 't') ADVANCE(93);
      if (lookahead == 'y') ADVANCE(133);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'e') ADVANCE(130);
      if (lookahead == 't') ADVANCE(121);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'e') ADVANCE(144);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'e') ADVANCE(113);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'h') ADVANCE(135);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'h') ADVANCE(148);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'i') ADVANCE(146);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'i') ADVANCE(164);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'i') ADVANCE(147);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'i') ADVANCE(156);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'i') ADVANCE(137);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'i') ADVANCE(138);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'k') ADVANCE(103);
      if (lookahead == 'v') ADVANCE(201);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'k') ADVANCE(150);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'l') ADVANCE(167);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'l') ADVANCE(143);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'l') ADVANCE(125);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'm') ADVANCE(210);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'm') ADVANCE(171);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'n') ADVANCE(203);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'n') ADVANCE(205);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'n') ADVANCE(215);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'n') ADVANCE(98);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'n') ADVANCE(118);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'o') ADVANCE(179);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'o') ADVANCE(152);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'o') ADVANCE(131);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'o') ADVANCE(132);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'o') ADVANCE(102);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'o') ADVANCE(134);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'o') ADVANCE(104);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'p') ADVANCE(112);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'p') ADVANCE(185);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'p') ADVANCE(162);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'p') ADVANCE(159);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'r') ADVANCE(199);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'r') ADVANCE(213);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'r') ADVANCE(140);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 's') ADVANCE(191);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 's') ADVANCE(160);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 's') ADVANCE(153);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 's') ADVANCE(107);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 's') ADVANCE(122);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 't') ADVANCE(183);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 't') ADVANCE(207);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 't') ADVANCE(181);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 't') ADVANCE(217);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 't') ADVANCE(109);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 't') ADVANCE(141);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'u') ADVANCE(129);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'u') ADVANCE(155);
      if (lookahead == 'w') ADVANCE(100);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'u') ADVANCE(145);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'w') ADVANCE(101);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (lookahead == 'z') ADVANCE(108);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(165);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_command_parameter_token3);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_call);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_cd);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_cd);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_checksum);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_checksum);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_chmod);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_chmod);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_close);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_close);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_cp);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_cp);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_echo);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_echo);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_exit);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_exit);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_get);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_get);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_help);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_help);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_keepuptodate);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_keepuptodate);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_lcd);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_lcd);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_lls);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_lls);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_ln);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_ln);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_lpwd);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_lpwd);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_ls);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_ls);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_mkdir);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_mkdir);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_mv);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_mv);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_open);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_open);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_option);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_option);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_put);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_put);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_pwd);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_pwd);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_rm);
      if (lookahead == 'd') ADVANCE(119);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_rm);
      if (lookahead == 'd') ADVANCE(31);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_rmdir);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_rmdir);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_session);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_session);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_stat);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_stat);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_synchronize);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_synchronize);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 78},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 78},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 78},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 78},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 77},
  [19] = {.lex_state = 87},
  [20] = {.lex_state = 90},
  [21] = {.lex_state = 81},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
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
    [sym_source_file] = STATE(17),
    [sym__line] = STATE(5),
    [sym_comment] = STATE(5),
    [sym_command] = STATE(5),
    [sym_command_name] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(5),
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
    [sym_command_switch] = STATE(3),
    [sym_command_parameter] = STATE(6),
    [aux_sym_command_repeat1] = STATE(3),
    [aux_sym_command_repeat2] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_POUND] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_command_parameter_token3] = ACTIONS(19),
    [anon_sym_call] = ACTIONS(21),
    [anon_sym_cd] = ACTIONS(21),
    [anon_sym_checksum] = ACTIONS(21),
    [anon_sym_chmod] = ACTIONS(21),
    [anon_sym_close] = ACTIONS(21),
    [anon_sym_cp] = ACTIONS(21),
    [anon_sym_echo] = ACTIONS(21),
    [anon_sym_exit] = ACTIONS(21),
    [anon_sym_get] = ACTIONS(21),
    [anon_sym_help] = ACTIONS(21),
    [anon_sym_keepuptodate] = ACTIONS(21),
    [anon_sym_lcd] = ACTIONS(21),
    [anon_sym_lls] = ACTIONS(21),
    [anon_sym_ln] = ACTIONS(21),
    [anon_sym_lpwd] = ACTIONS(21),
    [anon_sym_ls] = ACTIONS(21),
    [anon_sym_mkdir] = ACTIONS(21),
    [anon_sym_mv] = ACTIONS(21),
    [anon_sym_open] = ACTIONS(21),
    [anon_sym_option] = ACTIONS(21),
    [anon_sym_put] = ACTIONS(21),
    [anon_sym_pwd] = ACTIONS(21),
    [anon_sym_rm] = ACTIONS(21),
    [anon_sym_rmdir] = ACTIONS(21),
    [anon_sym_session] = ACTIONS(21),
    [anon_sym_stat] = ACTIONS(21),
    [anon_sym_synchronize] = ACTIONS(21),
  },
  [3] = {
    [sym_command_switch] = STATE(4),
    [sym_command_parameter] = STATE(9),
    [aux_sym_command_repeat1] = STATE(4),
    [aux_sym_command_repeat2] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_POUND] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_command_parameter_token3] = ACTIONS(19),
    [anon_sym_call] = ACTIONS(25),
    [anon_sym_cd] = ACTIONS(25),
    [anon_sym_checksum] = ACTIONS(25),
    [anon_sym_chmod] = ACTIONS(25),
    [anon_sym_close] = ACTIONS(25),
    [anon_sym_cp] = ACTIONS(25),
    [anon_sym_echo] = ACTIONS(25),
    [anon_sym_exit] = ACTIONS(25),
    [anon_sym_get] = ACTIONS(25),
    [anon_sym_help] = ACTIONS(25),
    [anon_sym_keepuptodate] = ACTIONS(25),
    [anon_sym_lcd] = ACTIONS(25),
    [anon_sym_lls] = ACTIONS(25),
    [anon_sym_ln] = ACTIONS(25),
    [anon_sym_lpwd] = ACTIONS(25),
    [anon_sym_ls] = ACTIONS(25),
    [anon_sym_mkdir] = ACTIONS(25),
    [anon_sym_mv] = ACTIONS(25),
    [anon_sym_open] = ACTIONS(25),
    [anon_sym_option] = ACTIONS(25),
    [anon_sym_put] = ACTIONS(25),
    [anon_sym_pwd] = ACTIONS(25),
    [anon_sym_rm] = ACTIONS(25),
    [anon_sym_rmdir] = ACTIONS(25),
    [anon_sym_session] = ACTIONS(25),
    [anon_sym_stat] = ACTIONS(25),
    [anon_sym_synchronize] = ACTIONS(25),
  },
  [4] = {
    [sym_command_switch] = STATE(4),
    [aux_sym_command_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [aux_sym_command_parameter_token3] = ACTIONS(32),
    [anon_sym_call] = ACTIONS(32),
    [anon_sym_cd] = ACTIONS(32),
    [anon_sym_checksum] = ACTIONS(32),
    [anon_sym_chmod] = ACTIONS(32),
    [anon_sym_close] = ACTIONS(32),
    [anon_sym_cp] = ACTIONS(32),
    [anon_sym_echo] = ACTIONS(32),
    [anon_sym_exit] = ACTIONS(32),
    [anon_sym_get] = ACTIONS(32),
    [anon_sym_help] = ACTIONS(32),
    [anon_sym_keepuptodate] = ACTIONS(32),
    [anon_sym_lcd] = ACTIONS(32),
    [anon_sym_lls] = ACTIONS(32),
    [anon_sym_ln] = ACTIONS(32),
    [anon_sym_lpwd] = ACTIONS(32),
    [anon_sym_ls] = ACTIONS(32),
    [anon_sym_mkdir] = ACTIONS(32),
    [anon_sym_mv] = ACTIONS(32),
    [anon_sym_open] = ACTIONS(32),
    [anon_sym_option] = ACTIONS(32),
    [anon_sym_put] = ACTIONS(32),
    [anon_sym_pwd] = ACTIONS(32),
    [anon_sym_rm] = ACTIONS(32),
    [anon_sym_rmdir] = ACTIONS(32),
    [anon_sym_session] = ACTIONS(32),
    [anon_sym_stat] = ACTIONS(32),
    [anon_sym_synchronize] = ACTIONS(32),
  },
  [5] = {
    [sym__line] = STATE(7),
    [sym_comment] = STATE(7),
    [sym_command] = STATE(7),
    [sym_command_name] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(34),
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
  [6] = {
    [sym_command_parameter] = STATE(10),
    [aux_sym_command_repeat2] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_POUND] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_command_parameter_token3] = ACTIONS(19),
    [anon_sym_call] = ACTIONS(25),
    [anon_sym_cd] = ACTIONS(25),
    [anon_sym_checksum] = ACTIONS(25),
    [anon_sym_chmod] = ACTIONS(25),
    [anon_sym_close] = ACTIONS(25),
    [anon_sym_cp] = ACTIONS(25),
    [anon_sym_echo] = ACTIONS(25),
    [anon_sym_exit] = ACTIONS(25),
    [anon_sym_get] = ACTIONS(25),
    [anon_sym_help] = ACTIONS(25),
    [anon_sym_keepuptodate] = ACTIONS(25),
    [anon_sym_lcd] = ACTIONS(25),
    [anon_sym_lls] = ACTIONS(25),
    [anon_sym_ln] = ACTIONS(25),
    [anon_sym_lpwd] = ACTIONS(25),
    [anon_sym_ls] = ACTIONS(25),
    [anon_sym_mkdir] = ACTIONS(25),
    [anon_sym_mv] = ACTIONS(25),
    [anon_sym_open] = ACTIONS(25),
    [anon_sym_option] = ACTIONS(25),
    [anon_sym_put] = ACTIONS(25),
    [anon_sym_pwd] = ACTIONS(25),
    [anon_sym_rm] = ACTIONS(25),
    [anon_sym_rmdir] = ACTIONS(25),
    [anon_sym_session] = ACTIONS(25),
    [anon_sym_stat] = ACTIONS(25),
    [anon_sym_synchronize] = ACTIONS(25),
  },
  [7] = {
    [sym__line] = STATE(7),
    [sym_comment] = STATE(7),
    [sym_command] = STATE(7),
    [sym_command_name] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(36),
    [anon_sym_POUND] = ACTIONS(38),
    [anon_sym_call] = ACTIONS(41),
    [anon_sym_cd] = ACTIONS(41),
    [anon_sym_checksum] = ACTIONS(41),
    [anon_sym_chmod] = ACTIONS(41),
    [anon_sym_close] = ACTIONS(41),
    [anon_sym_cp] = ACTIONS(41),
    [anon_sym_echo] = ACTIONS(41),
    [anon_sym_exit] = ACTIONS(41),
    [anon_sym_get] = ACTIONS(41),
    [anon_sym_help] = ACTIONS(41),
    [anon_sym_keepuptodate] = ACTIONS(41),
    [anon_sym_lcd] = ACTIONS(41),
    [anon_sym_lls] = ACTIONS(41),
    [anon_sym_ln] = ACTIONS(41),
    [anon_sym_lpwd] = ACTIONS(41),
    [anon_sym_ls] = ACTIONS(41),
    [anon_sym_mkdir] = ACTIONS(41),
    [anon_sym_mv] = ACTIONS(41),
    [anon_sym_open] = ACTIONS(41),
    [anon_sym_option] = ACTIONS(41),
    [anon_sym_put] = ACTIONS(41),
    [anon_sym_pwd] = ACTIONS(41),
    [anon_sym_rm] = ACTIONS(44),
    [anon_sym_rmdir] = ACTIONS(41),
    [anon_sym_session] = ACTIONS(41),
    [anon_sym_stat] = ACTIONS(41),
    [anon_sym_synchronize] = ACTIONS(41),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_EQ] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [aux_sym_command_parameter_token3] = ACTIONS(51),
    [anon_sym_call] = ACTIONS(51),
    [anon_sym_cd] = ACTIONS(51),
    [anon_sym_checksum] = ACTIONS(51),
    [anon_sym_chmod] = ACTIONS(51),
    [anon_sym_close] = ACTIONS(51),
    [anon_sym_cp] = ACTIONS(51),
    [anon_sym_echo] = ACTIONS(51),
    [anon_sym_exit] = ACTIONS(51),
    [anon_sym_get] = ACTIONS(51),
    [anon_sym_help] = ACTIONS(51),
    [anon_sym_keepuptodate] = ACTIONS(51),
    [anon_sym_lcd] = ACTIONS(51),
    [anon_sym_lls] = ACTIONS(51),
    [anon_sym_ln] = ACTIONS(51),
    [anon_sym_lpwd] = ACTIONS(51),
    [anon_sym_ls] = ACTIONS(51),
    [anon_sym_mkdir] = ACTIONS(51),
    [anon_sym_mv] = ACTIONS(51),
    [anon_sym_open] = ACTIONS(51),
    [anon_sym_option] = ACTIONS(51),
    [anon_sym_put] = ACTIONS(51),
    [anon_sym_pwd] = ACTIONS(51),
    [anon_sym_rm] = ACTIONS(51),
    [anon_sym_rmdir] = ACTIONS(51),
    [anon_sym_session] = ACTIONS(51),
    [anon_sym_stat] = ACTIONS(51),
    [anon_sym_synchronize] = ACTIONS(51),
  },
  [9] = {
    [sym_command_parameter] = STATE(10),
    [aux_sym_command_repeat2] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(53),
    [anon_sym_POUND] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_command_parameter_token3] = ACTIONS(19),
    [anon_sym_call] = ACTIONS(55),
    [anon_sym_cd] = ACTIONS(55),
    [anon_sym_checksum] = ACTIONS(55),
    [anon_sym_chmod] = ACTIONS(55),
    [anon_sym_close] = ACTIONS(55),
    [anon_sym_cp] = ACTIONS(55),
    [anon_sym_echo] = ACTIONS(55),
    [anon_sym_exit] = ACTIONS(55),
    [anon_sym_get] = ACTIONS(55),
    [anon_sym_help] = ACTIONS(55),
    [anon_sym_keepuptodate] = ACTIONS(55),
    [anon_sym_lcd] = ACTIONS(55),
    [anon_sym_lls] = ACTIONS(55),
    [anon_sym_ln] = ACTIONS(55),
    [anon_sym_lpwd] = ACTIONS(55),
    [anon_sym_ls] = ACTIONS(55),
    [anon_sym_mkdir] = ACTIONS(55),
    [anon_sym_mv] = ACTIONS(55),
    [anon_sym_open] = ACTIONS(55),
    [anon_sym_option] = ACTIONS(55),
    [anon_sym_put] = ACTIONS(55),
    [anon_sym_pwd] = ACTIONS(55),
    [anon_sym_rm] = ACTIONS(55),
    [anon_sym_rmdir] = ACTIONS(55),
    [anon_sym_session] = ACTIONS(55),
    [anon_sym_stat] = ACTIONS(55),
    [anon_sym_synchronize] = ACTIONS(55),
  },
  [10] = {
    [sym_command_parameter] = STATE(10),
    [aux_sym_command_repeat2] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(57),
    [anon_sym_POUND] = ACTIONS(57),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(62),
    [aux_sym_command_parameter_token3] = ACTIONS(65),
    [anon_sym_call] = ACTIONS(68),
    [anon_sym_cd] = ACTIONS(68),
    [anon_sym_checksum] = ACTIONS(68),
    [anon_sym_chmod] = ACTIONS(68),
    [anon_sym_close] = ACTIONS(68),
    [anon_sym_cp] = ACTIONS(68),
    [anon_sym_echo] = ACTIONS(68),
    [anon_sym_exit] = ACTIONS(68),
    [anon_sym_get] = ACTIONS(68),
    [anon_sym_help] = ACTIONS(68),
    [anon_sym_keepuptodate] = ACTIONS(68),
    [anon_sym_lcd] = ACTIONS(68),
    [anon_sym_lls] = ACTIONS(68),
    [anon_sym_ln] = ACTIONS(68),
    [anon_sym_lpwd] = ACTIONS(68),
    [anon_sym_ls] = ACTIONS(68),
    [anon_sym_mkdir] = ACTIONS(68),
    [anon_sym_mv] = ACTIONS(68),
    [anon_sym_open] = ACTIONS(68),
    [anon_sym_option] = ACTIONS(68),
    [anon_sym_put] = ACTIONS(68),
    [anon_sym_pwd] = ACTIONS(68),
    [anon_sym_rm] = ACTIONS(68),
    [anon_sym_rmdir] = ACTIONS(68),
    [anon_sym_session] = ACTIONS(68),
    [anon_sym_stat] = ACTIONS(68),
    [anon_sym_synchronize] = ACTIONS(68),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(70),
    [anon_sym_POUND] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(70),
    [anon_sym_SQUOTE] = ACTIONS(70),
    [anon_sym_DQUOTE] = ACTIONS(70),
    [aux_sym_command_parameter_token3] = ACTIONS(72),
    [anon_sym_call] = ACTIONS(72),
    [anon_sym_cd] = ACTIONS(72),
    [anon_sym_checksum] = ACTIONS(72),
    [anon_sym_chmod] = ACTIONS(72),
    [anon_sym_close] = ACTIONS(72),
    [anon_sym_cp] = ACTIONS(72),
    [anon_sym_echo] = ACTIONS(72),
    [anon_sym_exit] = ACTIONS(72),
    [anon_sym_get] = ACTIONS(72),
    [anon_sym_help] = ACTIONS(72),
    [anon_sym_keepuptodate] = ACTIONS(72),
    [anon_sym_lcd] = ACTIONS(72),
    [anon_sym_lls] = ACTIONS(72),
    [anon_sym_ln] = ACTIONS(72),
    [anon_sym_lpwd] = ACTIONS(72),
    [anon_sym_ls] = ACTIONS(72),
    [anon_sym_mkdir] = ACTIONS(72),
    [anon_sym_mv] = ACTIONS(72),
    [anon_sym_open] = ACTIONS(72),
    [anon_sym_option] = ACTIONS(72),
    [anon_sym_put] = ACTIONS(72),
    [anon_sym_pwd] = ACTIONS(72),
    [anon_sym_rm] = ACTIONS(72),
    [anon_sym_rmdir] = ACTIONS(72),
    [anon_sym_session] = ACTIONS(72),
    [anon_sym_stat] = ACTIONS(72),
    [anon_sym_synchronize] = ACTIONS(72),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(74),
    [anon_sym_POUND] = ACTIONS(74),
    [anon_sym_DASH] = ACTIONS(74),
    [anon_sym_SQUOTE] = ACTIONS(74),
    [anon_sym_DQUOTE] = ACTIONS(74),
    [aux_sym_command_parameter_token3] = ACTIONS(76),
    [anon_sym_call] = ACTIONS(76),
    [anon_sym_cd] = ACTIONS(76),
    [anon_sym_checksum] = ACTIONS(76),
    [anon_sym_chmod] = ACTIONS(76),
    [anon_sym_close] = ACTIONS(76),
    [anon_sym_cp] = ACTIONS(76),
    [anon_sym_echo] = ACTIONS(76),
    [anon_sym_exit] = ACTIONS(76),
    [anon_sym_get] = ACTIONS(76),
    [anon_sym_help] = ACTIONS(76),
    [anon_sym_keepuptodate] = ACTIONS(76),
    [anon_sym_lcd] = ACTIONS(76),
    [anon_sym_lls] = ACTIONS(76),
    [anon_sym_ln] = ACTIONS(76),
    [anon_sym_lpwd] = ACTIONS(76),
    [anon_sym_ls] = ACTIONS(76),
    [anon_sym_mkdir] = ACTIONS(76),
    [anon_sym_mv] = ACTIONS(76),
    [anon_sym_open] = ACTIONS(76),
    [anon_sym_option] = ACTIONS(76),
    [anon_sym_put] = ACTIONS(76),
    [anon_sym_pwd] = ACTIONS(76),
    [anon_sym_rm] = ACTIONS(76),
    [anon_sym_rmdir] = ACTIONS(76),
    [anon_sym_session] = ACTIONS(76),
    [anon_sym_stat] = ACTIONS(76),
    [anon_sym_synchronize] = ACTIONS(76),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(78),
    [anon_sym_POUND] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [anon_sym_SQUOTE] = ACTIONS(78),
    [anon_sym_DQUOTE] = ACTIONS(78),
    [aux_sym_command_parameter_token3] = ACTIONS(80),
    [anon_sym_call] = ACTIONS(80),
    [anon_sym_cd] = ACTIONS(80),
    [anon_sym_checksum] = ACTIONS(80),
    [anon_sym_chmod] = ACTIONS(80),
    [anon_sym_close] = ACTIONS(80),
    [anon_sym_cp] = ACTIONS(80),
    [anon_sym_echo] = ACTIONS(80),
    [anon_sym_exit] = ACTIONS(80),
    [anon_sym_get] = ACTIONS(80),
    [anon_sym_help] = ACTIONS(80),
    [anon_sym_keepuptodate] = ACTIONS(80),
    [anon_sym_lcd] = ACTIONS(80),
    [anon_sym_lls] = ACTIONS(80),
    [anon_sym_ln] = ACTIONS(80),
    [anon_sym_lpwd] = ACTIONS(80),
    [anon_sym_ls] = ACTIONS(80),
    [anon_sym_mkdir] = ACTIONS(80),
    [anon_sym_mv] = ACTIONS(80),
    [anon_sym_open] = ACTIONS(80),
    [anon_sym_option] = ACTIONS(80),
    [anon_sym_put] = ACTIONS(80),
    [anon_sym_pwd] = ACTIONS(80),
    [anon_sym_rm] = ACTIONS(80),
    [anon_sym_rmdir] = ACTIONS(80),
    [anon_sym_session] = ACTIONS(80),
    [anon_sym_stat] = ACTIONS(80),
    [anon_sym_synchronize] = ACTIONS(80),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(82),
    [anon_sym_POUND] = ACTIONS(82),
    [anon_sym_DASH] = ACTIONS(82),
    [anon_sym_SQUOTE] = ACTIONS(82),
    [anon_sym_DQUOTE] = ACTIONS(82),
    [aux_sym_command_parameter_token3] = ACTIONS(84),
    [anon_sym_call] = ACTIONS(84),
    [anon_sym_cd] = ACTIONS(84),
    [anon_sym_checksum] = ACTIONS(84),
    [anon_sym_chmod] = ACTIONS(84),
    [anon_sym_close] = ACTIONS(84),
    [anon_sym_cp] = ACTIONS(84),
    [anon_sym_echo] = ACTIONS(84),
    [anon_sym_exit] = ACTIONS(84),
    [anon_sym_get] = ACTIONS(84),
    [anon_sym_help] = ACTIONS(84),
    [anon_sym_keepuptodate] = ACTIONS(84),
    [anon_sym_lcd] = ACTIONS(84),
    [anon_sym_lls] = ACTIONS(84),
    [anon_sym_ln] = ACTIONS(84),
    [anon_sym_lpwd] = ACTIONS(84),
    [anon_sym_ls] = ACTIONS(84),
    [anon_sym_mkdir] = ACTIONS(84),
    [anon_sym_mv] = ACTIONS(84),
    [anon_sym_open] = ACTIONS(84),
    [anon_sym_option] = ACTIONS(84),
    [anon_sym_put] = ACTIONS(84),
    [anon_sym_pwd] = ACTIONS(84),
    [anon_sym_rm] = ACTIONS(84),
    [anon_sym_rmdir] = ACTIONS(84),
    [anon_sym_session] = ACTIONS(84),
    [anon_sym_stat] = ACTIONS(84),
    [anon_sym_synchronize] = ACTIONS(84),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(86),
    [anon_sym_POUND] = ACTIONS(86),
    [anon_sym_call] = ACTIONS(86),
    [anon_sym_cd] = ACTIONS(86),
    [anon_sym_checksum] = ACTIONS(86),
    [anon_sym_chmod] = ACTIONS(86),
    [anon_sym_close] = ACTIONS(86),
    [anon_sym_cp] = ACTIONS(86),
    [anon_sym_echo] = ACTIONS(86),
    [anon_sym_exit] = ACTIONS(86),
    [anon_sym_get] = ACTIONS(86),
    [anon_sym_help] = ACTIONS(86),
    [anon_sym_keepuptodate] = ACTIONS(86),
    [anon_sym_lcd] = ACTIONS(86),
    [anon_sym_lls] = ACTIONS(86),
    [anon_sym_ln] = ACTIONS(86),
    [anon_sym_lpwd] = ACTIONS(86),
    [anon_sym_ls] = ACTIONS(86),
    [anon_sym_mkdir] = ACTIONS(86),
    [anon_sym_mv] = ACTIONS(86),
    [anon_sym_open] = ACTIONS(86),
    [anon_sym_option] = ACTIONS(86),
    [anon_sym_put] = ACTIONS(86),
    [anon_sym_pwd] = ACTIONS(86),
    [anon_sym_rm] = ACTIONS(88),
    [anon_sym_rmdir] = ACTIONS(86),
    [anon_sym_session] = ACTIONS(86),
    [anon_sym_stat] = ACTIONS(86),
    [anon_sym_synchronize] = ACTIONS(86),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(90), 1,
      aux_sym_command_parameter_token3,
    STATE(14), 1,
      sym_command_parameter,
  [13] = 1,
    ACTIONS(92), 1,
      ts_builtin_sym_end,
  [17] = 1,
    ACTIONS(94), 1,
      aux_sym_command_switch_token1,
  [21] = 1,
    ACTIONS(96), 1,
      aux_sym_command_parameter_token1,
  [25] = 1,
    ACTIONS(98), 1,
      aux_sym_command_parameter_token2,
  [29] = 1,
    ACTIONS(100), 1,
      aux_sym_comment_token1,
  [33] = 1,
    ACTIONS(102), 1,
      anon_sym_SQUOTE,
  [37] = 1,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(16)] = 0,
  [SMALL_STATE(17)] = 13,
  [SMALL_STATE(18)] = 17,
  [SMALL_STATE(19)] = 21,
  [SMALL_STATE(20)] = 25,
  [SMALL_STATE(21)] = 29,
  [SMALL_STATE(22)] = 33,
  [SMALL_STATE(23)] = 37,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(18),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_switch, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_switch, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(19),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(20),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(11),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_parameter, 1),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_parameter, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_name, 1),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_name, 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_parameter, 3),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_parameter, 3),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_switch, 4),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_switch, 4),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [92] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
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
