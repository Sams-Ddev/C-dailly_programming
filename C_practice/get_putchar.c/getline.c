#include <stdlib.h>
#include <stdio.h>

/**
 * A program that prints "$ ", wait for the user to enter a command,
 * prints it on next line.
 * Using "getline()"
 */

int read_and_print_line(void)
{
	char buffer[1024];
	char *line;
	size_t n;

	printf("$ ");
	if ((n = getline(char *line, char (*)[1024], stdin)) != -1)
	{
		printf("%s", line);
		free(line);
	}
	else
	{
		perror("Command can not be found");
	}
	return (EXIT_SUCCESS);
}
