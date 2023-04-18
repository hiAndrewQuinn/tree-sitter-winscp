#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 17
#define LARGE_STATE_COUNT 14
#define SYMBOL_COUNT 42
#define ALIAS_COUNT 0
#define TOKEN_COUNT 32
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_POUND = 1,
  aux_sym_comment_token1 = 2,
  anon_sym_DASH = 3,
  aux_sym_command_switch_token1 = 4,
  anon_sym_call = 5,
  anon_sym_cd = 6,
  anon_sym_checksum = 7,
  anon_sym_chmod = 8,
  anon_sym_close = 9,
  anon_sym_cp = 10,
  anon_sym_echo = 11,
  anon_sym_exit = 12,
  anon_sym_get = 13,
  anon_sym_help = 14,
  anon_sym_keepuptodate = 15,
  anon_sym_lcd = 16,
  anon_sym_lls = 17,
  anon_sym_ln = 18,
  anon_sym_lpwd = 19,
  anon_sym_ls = 20,
  anon_sym_mkdir = 21,
  anon_sym_mv = 22,
  anon_sym_open = 23,
  anon_sym_option = 24,
  anon_sym_put = 25,
  anon_sym_pwd = 26,
  anon_sym_rm = 27,
  anon_sym_rmdir = 28,
  anon_sym_session = 29,
  anon_sym_stat = 30,
  anon_sym_synchronize = 31,
  sym_source_file = 32,
  sym__line = 33,
  sym_comment = 34,
  sym_command = 35,
  sym_command_switch = 36,
  sym_command_parameter = 37,
  sym_command_name = 38,
  aux_sym_source_file_repeat1 = 39,
  aux_sym_command_repeat1 = 40,
  aux_sym_command_repeat2 = 41,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_DASH] = "-",
  [aux_sym_command_switch_token1] = "command_switch_token1",
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(76);
      if (lookahead == '#') ADVANCE(77);
      if (lookahead == '-') ADVANCE(80);
      if (lookahead == 'c') ADVANCE(81);
      if (lookahead == 'e') ADVANCE(84);
      if (lookahead == 'g') ADVANCE(94);
      if (lookahead == 'h') ADVANCE(99);
      if (lookahead == 'k') ADVANCE(103);
      if (lookahead == 'l') ADVANCE(85);
      if (lookahead == 'm') ADVANCE(112);
      if (lookahead == 'o') ADVANCE(131);
      if (lookahead == 'p') ADVANCE(150);
      if (lookahead == 'r') ADVANCE(117);
      if (lookahead == 's') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(36);
      if (lookahead == 'd') ADVANCE(157);
      if (lookahead == 'h') ADVANCE(15);
      if (lookahead == 'l') ADVANCE(45);
      if (lookahead == 'p') ADVANCE(165);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 4:
      if (lookahead == 'c') ADVANCE(24);
      if (lookahead == 'x') ADVANCE(29);
      END_STATE();
    case 5:
      if (lookahead == 'c') ADVANCE(8);
      if (lookahead == 'l') ADVANCE(58);
      if (lookahead == 'n') ADVANCE(181);
      if (lookahead == 'p') ADVANCE(72);
      if (lookahead == 's') ADVANCE(185);
      END_STATE();
    case 6:
      if (lookahead == 'c') ADVANCE(33);
      END_STATE();
    case 7:
      if (lookahead == 'c') ADVANCE(25);
      END_STATE();
    case 8:
      if (lookahead == 'd') ADVANCE(177);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(197);
      END_STATE();
    case 10:
      if (lookahead == 'd') ADVANCE(183);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(161);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(26);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(3);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(6);
      if (lookahead == 'm') ADVANCE(48);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(60);
      if (lookahead == 't') ADVANCE(2);
      if (lookahead == 'y') ADVANCE(42);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(39);
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == 'h') ADVANCE(44);
      END_STATE();
    case 25:
      if (lookahead == 'h') ADVANCE(57);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 32:
      if (lookahead == 'k') ADVANCE(12);
      if (lookahead == 'v') ADVANCE(189);
      END_STATE();
    case 33:
      if (lookahead == 'k') ADVANCE(59);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(155);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 37:
      if (lookahead == 'm') ADVANCE(200);
      END_STATE();
    case 38:
      if (lookahead == 'm') ADVANCE(159);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(191);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(193);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(203);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(11);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 51:
      if (lookahead == 'p') ADVANCE(21);
      END_STATE();
    case 52:
      if (lookahead == 'p') ADVANCE(173);
      END_STATE();
    case 53:
      if (lookahead == 'p') ADVANCE(71);
      END_STATE();
    case 54:
      if (lookahead == 'p') ADVANCE(68);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 58:
      if (lookahead == 's') ADVANCE(179);
      END_STATE();
    case 59:
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 60:
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 61:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 62:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(195);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(169);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(205);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 69:
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 70:
      if (lookahead == 'u') ADVANCE(64);
      if (lookahead == 'w') ADVANCE(9);
      END_STATE();
    case 71:
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 72:
      if (lookahead == 'w') ADVANCE(10);
      END_STATE();
    case 73:
      if (lookahead == 'z') ADVANCE(17);
      END_STATE();
    case 74:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(74)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 75:
      if (eof) ADVANCE(76);
      if (lookahead == '#') ADVANCE(77);
      if (lookahead == 'c') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(4);
      if (lookahead == 'g') ADVANCE(14);
      if (lookahead == 'h') ADVANCE(19);
      if (lookahead == 'k') ADVANCE(23);
      if (lookahead == 'l') ADVANCE(5);
      if (lookahead == 'm') ADVANCE(32);
      if (lookahead == 'o') ADVANCE(51);
      if (lookahead == 'p') ADVANCE(70);
      if (lookahead == 'r') ADVANCE(37);
      if (lookahead == 's') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(75)
      END_STATE();
    case 76:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (lookahead == 'a') ADVANCE(116);
      if (lookahead == 'd') ADVANCE(158);
      if (lookahead == 'h') ADVANCE(95);
      if (lookahead == 'l') ADVANCE(125);
      if (lookahead == 'p') ADVANCE(166);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (lookahead == 'a') ADVANCE(146);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (lookahead == 'a') ADVANCE(147);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (lookahead == 'c') ADVANCE(104);
      if (lookahead == 'x') ADVANCE(109);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (lookahead == 'c') ADVANCE(88);
      if (lookahead == 'l') ADVANCE(138);
      if (lookahead == 'n') ADVANCE(182);
      if (lookahead == 'p') ADVANCE(152);
      if (lookahead == 's') ADVANCE(186);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (lookahead == 'c') ADVANCE(113);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (lookahead == 'c') ADVANCE(105);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (lookahead == 'd') ADVANCE(178);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (lookahead == 'd') ADVANCE(198);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (lookahead == 'd') ADVANCE(184);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (lookahead == 'd') ADVANCE(162);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (lookahead == 'd') ADVANCE(106);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (lookahead == 'd') ADVANCE(83);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (lookahead == 'e') ADVANCE(143);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (lookahead == 'e') ADVANCE(86);
      if (lookahead == 'm') ADVANCE(128);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (lookahead == 'e') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (lookahead == 'e') ADVANCE(208);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (lookahead == 'e') ADVANCE(176);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (lookahead == 'e') ADVANCE(115);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (lookahead == 'e') ADVANCE(140);
      if (lookahead == 't') ADVANCE(82);
      if (lookahead == 'y') ADVANCE(122);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (lookahead == 'e') ADVANCE(119);
      if (lookahead == 't') ADVANCE(110);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (lookahead == 'e') ADVANCE(133);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (lookahead == 'e') ADVANCE(102);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (lookahead == 'h') ADVANCE(124);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (lookahead == 'h') ADVANCE(137);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (lookahead == 'i') ADVANCE(135);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (lookahead == 'i') ADVANCE(153);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (lookahead == 'i') ADVANCE(136);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (lookahead == 'i') ADVANCE(145);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (lookahead == 'i') ADVANCE(126);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (lookahead == 'i') ADVANCE(127);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (lookahead == 'k') ADVANCE(92);
      if (lookahead == 'v') ADVANCE(190);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (lookahead == 'k') ADVANCE(139);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (lookahead == 'l') ADVANCE(156);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (lookahead == 'l') ADVANCE(132);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (lookahead == 'l') ADVANCE(114);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (lookahead == 'm') ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (lookahead == 'm') ADVANCE(160);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (lookahead == 'n') ADVANCE(192);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (lookahead == 'n') ADVANCE(194);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (lookahead == 'n') ADVANCE(204);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (lookahead == 'n') ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (lookahead == 'n') ADVANCE(107);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (lookahead == 'o') ADVANCE(168);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (lookahead == 'o') ADVANCE(141);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (lookahead == 'o') ADVANCE(120);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (lookahead == 'o') ADVANCE(121);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (lookahead == 'o') ADVANCE(91);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (lookahead == 'o') ADVANCE(123);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (lookahead == 'o') ADVANCE(93);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (lookahead == 'p') ADVANCE(101);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (lookahead == 'p') ADVANCE(174);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (lookahead == 'p') ADVANCE(151);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (lookahead == 'p') ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (lookahead == 'r') ADVANCE(188);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (lookahead == 'r') ADVANCE(202);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (lookahead == 'r') ADVANCE(129);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (lookahead == 's') ADVANCE(180);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (lookahead == 's') ADVANCE(149);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (lookahead == 's') ADVANCE(142);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (lookahead == 's') ADVANCE(96);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (lookahead == 's') ADVANCE(111);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (lookahead == 't') ADVANCE(172);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (lookahead == 't') ADVANCE(196);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (lookahead == 't') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (lookahead == 't') ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (lookahead == 't') ADVANCE(98);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (lookahead == 't') ADVANCE(130);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (lookahead == 'u') ADVANCE(118);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (lookahead == 'u') ADVANCE(144);
      if (lookahead == 'w') ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (lookahead == 'u') ADVANCE(134);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (lookahead == 'w') ADVANCE(90);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (lookahead == 'z') ADVANCE(97);
      if (('a' <= lookahead && lookahead <= 'y')) ADVANCE(154);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_command_switch_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_call);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_cd);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_cd);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_checksum);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_checksum);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_chmod);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_chmod);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_close);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_close);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_cp);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_cp);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_echo);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_echo);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_exit);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_exit);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_get);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_get);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_help);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_help);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_keepuptodate);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_keepuptodate);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_lcd);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_lcd);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_lls);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_lls);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_ln);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_ln);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_lpwd);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_lpwd);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_ls);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_ls);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_mkdir);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_mkdir);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_mv);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_mv);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_open);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_open);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_option);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_option);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_put);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_put);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_pwd);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_pwd);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_rm);
      if (lookahead == 'd') ADVANCE(108);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_rm);
      if (lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_rmdir);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_rmdir);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_session);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_session);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_stat);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_stat);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_synchronize);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_synchronize);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 75},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 75},
  [5] = {.lex_state = 75},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 75},
  [14] = {.lex_state = 78},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 74},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym_command_switch_token1] = ACTIONS(1),
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
    [sym_source_file] = STATE(15),
    [sym__line] = STATE(4),
    [sym_comment] = STATE(4),
    [sym_command] = STATE(4),
    [sym_command_name] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(4),
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
    [sym_command_parameter] = STATE(7),
    [aux_sym_command_repeat1] = STATE(3),
    [aux_sym_command_repeat2] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_POUND] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym_command_switch_token1] = ACTIONS(15),
    [anon_sym_call] = ACTIONS(17),
    [anon_sym_cd] = ACTIONS(17),
    [anon_sym_checksum] = ACTIONS(17),
    [anon_sym_chmod] = ACTIONS(17),
    [anon_sym_close] = ACTIONS(17),
    [anon_sym_cp] = ACTIONS(17),
    [anon_sym_echo] = ACTIONS(17),
    [anon_sym_exit] = ACTIONS(17),
    [anon_sym_get] = ACTIONS(17),
    [anon_sym_help] = ACTIONS(17),
    [anon_sym_keepuptodate] = ACTIONS(17),
    [anon_sym_lcd] = ACTIONS(17),
    [anon_sym_lls] = ACTIONS(17),
    [anon_sym_ln] = ACTIONS(17),
    [anon_sym_lpwd] = ACTIONS(17),
    [anon_sym_ls] = ACTIONS(17),
    [anon_sym_mkdir] = ACTIONS(17),
    [anon_sym_mv] = ACTIONS(17),
    [anon_sym_open] = ACTIONS(17),
    [anon_sym_option] = ACTIONS(17),
    [anon_sym_put] = ACTIONS(17),
    [anon_sym_pwd] = ACTIONS(17),
    [anon_sym_rm] = ACTIONS(17),
    [anon_sym_rmdir] = ACTIONS(17),
    [anon_sym_session] = ACTIONS(17),
    [anon_sym_stat] = ACTIONS(17),
    [anon_sym_synchronize] = ACTIONS(17),
  },
  [3] = {
    [sym_command_switch] = STATE(6),
    [sym_command_parameter] = STATE(8),
    [aux_sym_command_repeat1] = STATE(6),
    [aux_sym_command_repeat2] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym_command_switch_token1] = ACTIONS(15),
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
  [4] = {
    [sym__line] = STATE(5),
    [sym_comment] = STATE(5),
    [sym_command] = STATE(5),
    [sym_command_name] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(23),
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
  [5] = {
    [sym__line] = STATE(5),
    [sym_comment] = STATE(5),
    [sym_command] = STATE(5),
    [sym_command_name] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_POUND] = ACTIONS(27),
    [anon_sym_call] = ACTIONS(30),
    [anon_sym_cd] = ACTIONS(30),
    [anon_sym_checksum] = ACTIONS(30),
    [anon_sym_chmod] = ACTIONS(30),
    [anon_sym_close] = ACTIONS(30),
    [anon_sym_cp] = ACTIONS(30),
    [anon_sym_echo] = ACTIONS(30),
    [anon_sym_exit] = ACTIONS(30),
    [anon_sym_get] = ACTIONS(30),
    [anon_sym_help] = ACTIONS(30),
    [anon_sym_keepuptodate] = ACTIONS(30),
    [anon_sym_lcd] = ACTIONS(30),
    [anon_sym_lls] = ACTIONS(30),
    [anon_sym_ln] = ACTIONS(30),
    [anon_sym_lpwd] = ACTIONS(30),
    [anon_sym_ls] = ACTIONS(30),
    [anon_sym_mkdir] = ACTIONS(30),
    [anon_sym_mv] = ACTIONS(30),
    [anon_sym_open] = ACTIONS(30),
    [anon_sym_option] = ACTIONS(30),
    [anon_sym_put] = ACTIONS(30),
    [anon_sym_pwd] = ACTIONS(30),
    [anon_sym_rm] = ACTIONS(33),
    [anon_sym_rmdir] = ACTIONS(30),
    [anon_sym_session] = ACTIONS(30),
    [anon_sym_stat] = ACTIONS(30),
    [anon_sym_synchronize] = ACTIONS(30),
  },
  [6] = {
    [sym_command_switch] = STATE(6),
    [aux_sym_command_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(36),
    [anon_sym_POUND] = ACTIONS(36),
    [anon_sym_DASH] = ACTIONS(38),
    [aux_sym_command_switch_token1] = ACTIONS(41),
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
    [anon_sym_rm] = ACTIONS(41),
    [anon_sym_rmdir] = ACTIONS(41),
    [anon_sym_session] = ACTIONS(41),
    [anon_sym_stat] = ACTIONS(41),
    [anon_sym_synchronize] = ACTIONS(41),
  },
  [7] = {
    [sym_command_parameter] = STATE(9),
    [aux_sym_command_repeat2] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_POUND] = ACTIONS(19),
    [aux_sym_command_switch_token1] = ACTIONS(15),
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
  [8] = {
    [sym_command_parameter] = STATE(9),
    [aux_sym_command_repeat2] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(43),
    [aux_sym_command_switch_token1] = ACTIONS(15),
    [anon_sym_call] = ACTIONS(45),
    [anon_sym_cd] = ACTIONS(45),
    [anon_sym_checksum] = ACTIONS(45),
    [anon_sym_chmod] = ACTIONS(45),
    [anon_sym_close] = ACTIONS(45),
    [anon_sym_cp] = ACTIONS(45),
    [anon_sym_echo] = ACTIONS(45),
    [anon_sym_exit] = ACTIONS(45),
    [anon_sym_get] = ACTIONS(45),
    [anon_sym_help] = ACTIONS(45),
    [anon_sym_keepuptodate] = ACTIONS(45),
    [anon_sym_lcd] = ACTIONS(45),
    [anon_sym_lls] = ACTIONS(45),
    [anon_sym_ln] = ACTIONS(45),
    [anon_sym_lpwd] = ACTIONS(45),
    [anon_sym_ls] = ACTIONS(45),
    [anon_sym_mkdir] = ACTIONS(45),
    [anon_sym_mv] = ACTIONS(45),
    [anon_sym_open] = ACTIONS(45),
    [anon_sym_option] = ACTIONS(45),
    [anon_sym_put] = ACTIONS(45),
    [anon_sym_pwd] = ACTIONS(45),
    [anon_sym_rm] = ACTIONS(45),
    [anon_sym_rmdir] = ACTIONS(45),
    [anon_sym_session] = ACTIONS(45),
    [anon_sym_stat] = ACTIONS(45),
    [anon_sym_synchronize] = ACTIONS(45),
  },
  [9] = {
    [sym_command_parameter] = STATE(9),
    [aux_sym_command_repeat2] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_POUND] = ACTIONS(47),
    [aux_sym_command_switch_token1] = ACTIONS(49),
    [anon_sym_call] = ACTIONS(52),
    [anon_sym_cd] = ACTIONS(52),
    [anon_sym_checksum] = ACTIONS(52),
    [anon_sym_chmod] = ACTIONS(52),
    [anon_sym_close] = ACTIONS(52),
    [anon_sym_cp] = ACTIONS(52),
    [anon_sym_echo] = ACTIONS(52),
    [anon_sym_exit] = ACTIONS(52),
    [anon_sym_get] = ACTIONS(52),
    [anon_sym_help] = ACTIONS(52),
    [anon_sym_keepuptodate] = ACTIONS(52),
    [anon_sym_lcd] = ACTIONS(52),
    [anon_sym_lls] = ACTIONS(52),
    [anon_sym_ln] = ACTIONS(52),
    [anon_sym_lpwd] = ACTIONS(52),
    [anon_sym_ls] = ACTIONS(52),
    [anon_sym_mkdir] = ACTIONS(52),
    [anon_sym_mv] = ACTIONS(52),
    [anon_sym_open] = ACTIONS(52),
    [anon_sym_option] = ACTIONS(52),
    [anon_sym_put] = ACTIONS(52),
    [anon_sym_pwd] = ACTIONS(52),
    [anon_sym_rm] = ACTIONS(52),
    [anon_sym_rmdir] = ACTIONS(52),
    [anon_sym_session] = ACTIONS(52),
    [anon_sym_stat] = ACTIONS(52),
    [anon_sym_synchronize] = ACTIONS(52),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(54),
    [anon_sym_POUND] = ACTIONS(54),
    [anon_sym_DASH] = ACTIONS(54),
    [aux_sym_command_switch_token1] = ACTIONS(56),
    [anon_sym_call] = ACTIONS(56),
    [anon_sym_cd] = ACTIONS(56),
    [anon_sym_checksum] = ACTIONS(56),
    [anon_sym_chmod] = ACTIONS(56),
    [anon_sym_close] = ACTIONS(56),
    [anon_sym_cp] = ACTIONS(56),
    [anon_sym_echo] = ACTIONS(56),
    [anon_sym_exit] = ACTIONS(56),
    [anon_sym_get] = ACTIONS(56),
    [anon_sym_help] = ACTIONS(56),
    [anon_sym_keepuptodate] = ACTIONS(56),
    [anon_sym_lcd] = ACTIONS(56),
    [anon_sym_lls] = ACTIONS(56),
    [anon_sym_ln] = ACTIONS(56),
    [anon_sym_lpwd] = ACTIONS(56),
    [anon_sym_ls] = ACTIONS(56),
    [anon_sym_mkdir] = ACTIONS(56),
    [anon_sym_mv] = ACTIONS(56),
    [anon_sym_open] = ACTIONS(56),
    [anon_sym_option] = ACTIONS(56),
    [anon_sym_put] = ACTIONS(56),
    [anon_sym_pwd] = ACTIONS(56),
    [anon_sym_rm] = ACTIONS(56),
    [anon_sym_rmdir] = ACTIONS(56),
    [anon_sym_session] = ACTIONS(56),
    [anon_sym_stat] = ACTIONS(56),
    [anon_sym_synchronize] = ACTIONS(56),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(58),
    [anon_sym_POUND] = ACTIONS(58),
    [anon_sym_DASH] = ACTIONS(58),
    [aux_sym_command_switch_token1] = ACTIONS(60),
    [anon_sym_call] = ACTIONS(60),
    [anon_sym_cd] = ACTIONS(60),
    [anon_sym_checksum] = ACTIONS(60),
    [anon_sym_chmod] = ACTIONS(60),
    [anon_sym_close] = ACTIONS(60),
    [anon_sym_cp] = ACTIONS(60),
    [anon_sym_echo] = ACTIONS(60),
    [anon_sym_exit] = ACTIONS(60),
    [anon_sym_get] = ACTIONS(60),
    [anon_sym_help] = ACTIONS(60),
    [anon_sym_keepuptodate] = ACTIONS(60),
    [anon_sym_lcd] = ACTIONS(60),
    [anon_sym_lls] = ACTIONS(60),
    [anon_sym_ln] = ACTIONS(60),
    [anon_sym_lpwd] = ACTIONS(60),
    [anon_sym_ls] = ACTIONS(60),
    [anon_sym_mkdir] = ACTIONS(60),
    [anon_sym_mv] = ACTIONS(60),
    [anon_sym_open] = ACTIONS(60),
    [anon_sym_option] = ACTIONS(60),
    [anon_sym_put] = ACTIONS(60),
    [anon_sym_pwd] = ACTIONS(60),
    [anon_sym_rm] = ACTIONS(60),
    [anon_sym_rmdir] = ACTIONS(60),
    [anon_sym_session] = ACTIONS(60),
    [anon_sym_stat] = ACTIONS(60),
    [anon_sym_synchronize] = ACTIONS(60),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(62),
    [anon_sym_POUND] = ACTIONS(62),
    [aux_sym_command_switch_token1] = ACTIONS(64),
    [anon_sym_call] = ACTIONS(64),
    [anon_sym_cd] = ACTIONS(64),
    [anon_sym_checksum] = ACTIONS(64),
    [anon_sym_chmod] = ACTIONS(64),
    [anon_sym_close] = ACTIONS(64),
    [anon_sym_cp] = ACTIONS(64),
    [anon_sym_echo] = ACTIONS(64),
    [anon_sym_exit] = ACTIONS(64),
    [anon_sym_get] = ACTIONS(64),
    [anon_sym_help] = ACTIONS(64),
    [anon_sym_keepuptodate] = ACTIONS(64),
    [anon_sym_lcd] = ACTIONS(64),
    [anon_sym_lls] = ACTIONS(64),
    [anon_sym_ln] = ACTIONS(64),
    [anon_sym_lpwd] = ACTIONS(64),
    [anon_sym_ls] = ACTIONS(64),
    [anon_sym_mkdir] = ACTIONS(64),
    [anon_sym_mv] = ACTIONS(64),
    [anon_sym_open] = ACTIONS(64),
    [anon_sym_option] = ACTIONS(64),
    [anon_sym_put] = ACTIONS(64),
    [anon_sym_pwd] = ACTIONS(64),
    [anon_sym_rm] = ACTIONS(64),
    [anon_sym_rmdir] = ACTIONS(64),
    [anon_sym_session] = ACTIONS(64),
    [anon_sym_stat] = ACTIONS(64),
    [anon_sym_synchronize] = ACTIONS(64),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(66),
    [anon_sym_POUND] = ACTIONS(66),
    [anon_sym_call] = ACTIONS(66),
    [anon_sym_cd] = ACTIONS(66),
    [anon_sym_checksum] = ACTIONS(66),
    [anon_sym_chmod] = ACTIONS(66),
    [anon_sym_close] = ACTIONS(66),
    [anon_sym_cp] = ACTIONS(66),
    [anon_sym_echo] = ACTIONS(66),
    [anon_sym_exit] = ACTIONS(66),
    [anon_sym_get] = ACTIONS(66),
    [anon_sym_help] = ACTIONS(66),
    [anon_sym_keepuptodate] = ACTIONS(66),
    [anon_sym_lcd] = ACTIONS(66),
    [anon_sym_lls] = ACTIONS(66),
    [anon_sym_ln] = ACTIONS(66),
    [anon_sym_lpwd] = ACTIONS(66),
    [anon_sym_ls] = ACTIONS(66),
    [anon_sym_mkdir] = ACTIONS(66),
    [anon_sym_mv] = ACTIONS(66),
    [anon_sym_open] = ACTIONS(66),
    [anon_sym_option] = ACTIONS(66),
    [anon_sym_put] = ACTIONS(66),
    [anon_sym_pwd] = ACTIONS(66),
    [anon_sym_rm] = ACTIONS(68),
    [anon_sym_rmdir] = ACTIONS(66),
    [anon_sym_session] = ACTIONS(66),
    [anon_sym_stat] = ACTIONS(66),
    [anon_sym_synchronize] = ACTIONS(66),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(70), 1,
      aux_sym_comment_token1,
  [4] = 1,
    ACTIONS(72), 1,
      ts_builtin_sym_end,
  [8] = 1,
    ACTIONS(74), 1,
      aux_sym_command_switch_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(14)] = 0,
  [SMALL_STATE(15)] = 4,
  [SMALL_STATE(16)] = 8,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(16),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(12),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_name, 1),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_name, 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_switch, 2),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_switch, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_parameter, 1),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_parameter, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [72] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
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
