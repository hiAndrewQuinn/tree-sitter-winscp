#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 11
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 37
#define ALIAS_COUNT 0
#define TOKEN_COUNT 30
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_POUND = 1,
  aux_sym_comment_token1 = 2,
  anon_sym_call = 3,
  anon_sym_cd = 4,
  anon_sym_checksum = 5,
  anon_sym_chmod = 6,
  anon_sym_close = 7,
  anon_sym_cp = 8,
  anon_sym_echo = 9,
  anon_sym_exit = 10,
  anon_sym_get = 11,
  anon_sym_help = 12,
  anon_sym_keepuptodate = 13,
  anon_sym_lcd = 14,
  anon_sym_lls = 15,
  anon_sym_ln = 16,
  anon_sym_lpwd = 17,
  anon_sym_ls = 18,
  anon_sym_mkdir = 19,
  anon_sym_mv = 20,
  anon_sym_open = 21,
  anon_sym_option = 22,
  anon_sym_put = 23,
  anon_sym_pwd = 24,
  anon_sym_rm = 25,
  anon_sym_rmdir = 26,
  anon_sym_session = 27,
  anon_sym_stat = 28,
  anon_sym_synchronize = 29,
  sym_source_file = 30,
  sym__line = 31,
  sym_comment = 32,
  sym_command = 33,
  sym_command_list = 34,
  sym_command_options = 35,
  aux_sym_source_file_repeat1 = 36,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
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
  [sym_command_list] = "command_list",
  [sym_command_options] = "command_options",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
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
  [sym_command_list] = sym_command_list,
  [sym_command_options] = sym_command_options,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
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
  [sym_command_list] = {
    .visible = true,
    .named = true,
  },
  [sym_command_options] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(74);
      if (lookahead == '#') ADVANCE(75);
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
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(36);
      if (lookahead == 'd') ADVANCE(79);
      if (lookahead == 'h') ADVANCE(15);
      if (lookahead == 'l') ADVANCE(45);
      if (lookahead == 'p') ADVANCE(83);
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
      if (lookahead == 'n') ADVANCE(91);
      if (lookahead == 'p') ADVANCE(72);
      if (lookahead == 's') ADVANCE(93);
      END_STATE();
    case 6:
      if (lookahead == 'c') ADVANCE(33);
      END_STATE();
    case 7:
      if (lookahead == 'c') ADVANCE(25);
      END_STATE();
    case 8:
      if (lookahead == 'd') ADVANCE(89);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(99);
      END_STATE();
    case 10:
      if (lookahead == 'd') ADVANCE(92);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(81);
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
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(88);
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
      if (lookahead == 'v') ADVANCE(95);
      END_STATE();
    case 33:
      if (lookahead == 'k') ADVANCE(59);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 37:
      if (lookahead == 'm') ADVANCE(100);
      END_STATE();
    case 38:
      if (lookahead == 'm') ADVANCE(80);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(84);
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
      if (lookahead == 'p') ADVANCE(87);
      END_STATE();
    case 53:
      if (lookahead == 'p') ADVANCE(71);
      END_STATE();
    case 54:
      if (lookahead == 'p') ADVANCE(68);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 58:
      if (lookahead == 's') ADVANCE(90);
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
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(103);
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
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_cd);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_checksum);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_chmod);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_close);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_cp);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_echo);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_exit);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_get);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_help);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_keepuptodate);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_lcd);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_lls);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_ln);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_lpwd);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_ls);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_mkdir);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_mv);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_open);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_option);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_put);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_pwd);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_rm);
      if (lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_rmdir);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_session);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_stat);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_synchronize);
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
  [7] = {.lex_state = 76},
  [8] = {.lex_state = 76},
  [9] = {.lex_state = 76},
  [10] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
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
    [sym_source_file] = STATE(10),
    [sym__line] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_command] = STATE(2),
    [sym_command_list] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(2),
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
    [sym__line] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_command] = STATE(3),
    [sym_command_list] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(11),
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
  [3] = {
    [sym__line] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_command] = STATE(3),
    [sym_command_list] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_call] = ACTIONS(18),
    [anon_sym_cd] = ACTIONS(18),
    [anon_sym_checksum] = ACTIONS(18),
    [anon_sym_chmod] = ACTIONS(18),
    [anon_sym_close] = ACTIONS(18),
    [anon_sym_cp] = ACTIONS(18),
    [anon_sym_echo] = ACTIONS(18),
    [anon_sym_exit] = ACTIONS(18),
    [anon_sym_get] = ACTIONS(18),
    [anon_sym_help] = ACTIONS(18),
    [anon_sym_keepuptodate] = ACTIONS(18),
    [anon_sym_lcd] = ACTIONS(18),
    [anon_sym_lls] = ACTIONS(18),
    [anon_sym_ln] = ACTIONS(18),
    [anon_sym_lpwd] = ACTIONS(18),
    [anon_sym_ls] = ACTIONS(18),
    [anon_sym_mkdir] = ACTIONS(18),
    [anon_sym_mv] = ACTIONS(18),
    [anon_sym_open] = ACTIONS(18),
    [anon_sym_option] = ACTIONS(18),
    [anon_sym_put] = ACTIONS(18),
    [anon_sym_pwd] = ACTIONS(18),
    [anon_sym_rm] = ACTIONS(21),
    [anon_sym_rmdir] = ACTIONS(18),
    [anon_sym_session] = ACTIONS(18),
    [anon_sym_stat] = ACTIONS(18),
    [anon_sym_synchronize] = ACTIONS(18),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(24),
    [anon_sym_POUND] = ACTIONS(24),
    [anon_sym_call] = ACTIONS(24),
    [anon_sym_cd] = ACTIONS(24),
    [anon_sym_checksum] = ACTIONS(24),
    [anon_sym_chmod] = ACTIONS(24),
    [anon_sym_close] = ACTIONS(24),
    [anon_sym_cp] = ACTIONS(24),
    [anon_sym_echo] = ACTIONS(24),
    [anon_sym_exit] = ACTIONS(24),
    [anon_sym_get] = ACTIONS(24),
    [anon_sym_help] = ACTIONS(24),
    [anon_sym_keepuptodate] = ACTIONS(24),
    [anon_sym_lcd] = ACTIONS(24),
    [anon_sym_lls] = ACTIONS(24),
    [anon_sym_ln] = ACTIONS(24),
    [anon_sym_lpwd] = ACTIONS(24),
    [anon_sym_ls] = ACTIONS(24),
    [anon_sym_mkdir] = ACTIONS(24),
    [anon_sym_mv] = ACTIONS(24),
    [anon_sym_open] = ACTIONS(24),
    [anon_sym_option] = ACTIONS(24),
    [anon_sym_put] = ACTIONS(24),
    [anon_sym_pwd] = ACTIONS(24),
    [anon_sym_rm] = ACTIONS(26),
    [anon_sym_rmdir] = ACTIONS(24),
    [anon_sym_session] = ACTIONS(24),
    [anon_sym_stat] = ACTIONS(24),
    [anon_sym_synchronize] = ACTIONS(24),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(28),
    [anon_sym_POUND] = ACTIONS(28),
    [anon_sym_call] = ACTIONS(28),
    [anon_sym_cd] = ACTIONS(28),
    [anon_sym_checksum] = ACTIONS(28),
    [anon_sym_chmod] = ACTIONS(28),
    [anon_sym_close] = ACTIONS(28),
    [anon_sym_cp] = ACTIONS(28),
    [anon_sym_echo] = ACTIONS(28),
    [anon_sym_exit] = ACTIONS(28),
    [anon_sym_get] = ACTIONS(28),
    [anon_sym_help] = ACTIONS(28),
    [anon_sym_keepuptodate] = ACTIONS(28),
    [anon_sym_lcd] = ACTIONS(28),
    [anon_sym_lls] = ACTIONS(28),
    [anon_sym_ln] = ACTIONS(28),
    [anon_sym_lpwd] = ACTIONS(28),
    [anon_sym_ls] = ACTIONS(28),
    [anon_sym_mkdir] = ACTIONS(28),
    [anon_sym_mv] = ACTIONS(28),
    [anon_sym_open] = ACTIONS(28),
    [anon_sym_option] = ACTIONS(28),
    [anon_sym_put] = ACTIONS(28),
    [anon_sym_pwd] = ACTIONS(28),
    [anon_sym_rm] = ACTIONS(30),
    [anon_sym_rmdir] = ACTIONS(28),
    [anon_sym_session] = ACTIONS(28),
    [anon_sym_stat] = ACTIONS(28),
    [anon_sym_synchronize] = ACTIONS(28),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(32),
    [anon_sym_POUND] = ACTIONS(32),
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
    [anon_sym_rm] = ACTIONS(34),
    [anon_sym_rmdir] = ACTIONS(32),
    [anon_sym_session] = ACTIONS(32),
    [anon_sym_stat] = ACTIONS(32),
    [anon_sym_synchronize] = ACTIONS(32),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(36), 1,
      aux_sym_comment_token1,
    STATE(6), 1,
      sym_command_options,
  [7] = 1,
    ACTIONS(38), 1,
      aux_sym_comment_token1,
  [11] = 1,
    ACTIONS(40), 1,
      aux_sym_comment_token1,
  [15] = 1,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 7,
  [SMALL_STATE(9)] = 11,
  [SMALL_STATE(10)] = 15,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [26] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_options, 1),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_options, 1),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_list, 1),
  [42] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
