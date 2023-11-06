#include "shell.h"
/**
 * executer_command - tis functionn executes the prompt argument
 * @command: the argument inserted after prompt
 * Return: nothing
 */
void executer_command(const char *command)
{
	int status;
	pid_t child_pid = fork();
	/*fork system call the child process*/
	if (child_pid == -1)/*indicates creation of child fail*/
	{
		perror("fork");
		exit(EXIT_FAILURE);/*exit shell*/
	}
	else if (child_pid == 0)/*creation of child success*/
	{
		execlp(command, command, (char *) NULL);
		perror("execlp");
		exit(EXIT_FAILURE);
	}
	else/*this is executed when child was a success and its finished*/
	{
		/*parent process*/
		wait(&status);
	}
}
