#include "shell.h"
/**
 * read_command - thsi function receive the user input
 * @command: this is a pointer to the argument
 * @size: size of the command
 * Return: nothing
 */
void read_command(char *command, size_t size)
{
	if (fgets(command, size, stdin) == NULL)
	{
		if (feof(stdin))
		{
			printer("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			printer("error reading your input\n");
			exit(EXIT_FAILURE);
		}
	}
	command[strcspn(command, "\n")] = '\0';
}
