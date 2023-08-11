#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * program prints the process ID of a process
 */

int main(void)
{
	pid_t my_pid;

	my_pid = getpid();

	printf("My process ID is _%u_\n", my_pid);
	return (EXIT_SUCCESS);
}
