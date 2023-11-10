#ifndef SHELL_H
#define SHELL_H
#include <unistd.h>
#include <sys/types.h>/*this will help in datatypes*/
#include <stdlib.h>/*const in prog termonation,malloc*/
#include <string.h>/*this will help in length*/
#include <stdio.h>
#include <sys/wait.h>
#include <errno.h>
void prompter_display(void);
void printer(const char *string);
void read_command(char *command, size_t size);
void executer_command(const char *command);
#endif
