#include "shell.h"
/**
 * main - this function is the main entry point of all prototypes
 * Return: always zero success
 */
int main(void)
{
	char command[180];
	char arguments[256];

	while (1)/*this is creating an infinite loop*/
	{
		prompter_display();
		read_command(command, sizeof(command));
		/*executer_command(command);*/
		executer_arguments(arguments);
	}
	return (0);
}
