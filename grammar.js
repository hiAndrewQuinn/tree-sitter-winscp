module.exports = grammar({
  name: 'WinSCP',
  rules: {
    source_file: $ => repeat($._line),

    _line: $ => choice(
      $.comment,
      $.command
    ),

    comment: $ => seq(
      '#',
      /.*/
    ),

    continue_line: $ => '^',

    env_variable: $ => seq("%", /[a-zA-Z0-9_]+/, "%"),

    // From the docs:
    //  command -switch -switch2 parameter1 parameter2 ... parametern
    //  All WinSCP commands have syntax: 
    command: $ => seq(
      $.command_name,
      repeat($.command_switch),
      repeat($.command_parameter),
      optional($.continue_line)
    ),

    command_switch: $ => seq(
      choice('-', '/'),// Switch
      /[a-z]+/,
      optional(seq('=', $.command_parameter)),
    ),

    command_parameter: $ => choice(
      $.env_variable,
      seq("'", /([^']|(\'\'))*/, "'"),
      seq('"', /([^"]|(""))*/, '"'),
      /[a-zA-Z0-9:/\\.@]+/,
    ),

    command_name: $ => choice(
      'call', // Executes arbitrary remote shell command
      'cd', // Changes remote working directory
      'checksum', // Calculates checksum of remote file
      'chmod', // Changes permissions of remote file
      'close', // Closes session
      'cp', // Duplicates remote file
      'echo', // Prints message onto script output
      'exit', // Closes all sessions and terminates the program
      'get', // Downloads file from remote directory to local directory
      'help', // Displays help
      'keepuptodate', // Continuously reflects changes in local directory on remote one
      'lcd', // Changes local working directory
      'lls', // Lists the contents of local directory
      'ln', // Creates remote symbolic link
      'lpwd', // Prints local working directory
      'ls', // Lists the contents of remote directory
      'mkdir', // Creates remote directory
      'mv', // Moves or renames remote file
      'open', // Connects to server
      'option', // Sets or shows value of script options
      'put', // Uploads file from local directory to remote directory
      'pwd', // Prints remote working directory
      'rm', // Removes remote file
      'rmdir', // Removes remote directory
      'session', // Lists connected sessions or selects active session
      'stat', // Retrieves attributes of remote file
      'synchronize', // Synchronizes remote directory with local one
    ),
 }
});


