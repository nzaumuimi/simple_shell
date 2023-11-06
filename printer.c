#include "shell.h"
/**
 * printer - this function prints the string
 * @string: pointer to the string
 * Return: nothing
 */
void printer(const char *string)
{
	write(STDOUT_FILENO, string, strlen(string));
}
