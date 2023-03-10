
#ifndef CONFIG_H
#define CONFIG_H


typedef struct Config
{
    char* SHELL_NAME;
    unsigned short COMMAND_MAX_CHARS ; // max. number of letters to be supported by a command
    unsigned short COMMAND_MAX_WORDS ; // max. number of words to be supported by a command
    
    char* PROMPT_LOGO_COLOR; // set the color of the shell logo
    char* PROMPT_USERNAME_COLOR; // set the color of the username
    char* PROMPT_CWD_COLOR;  // set the color of the CWD path
    char* PROMPT_TEXT_COLOR; // set the color of the text

} Config;

static const Config CONFIG = {"shell",80,10,"\e[1;37m","\e[1;32m","\e[1;36m","\e[0;37m"};
#endif
