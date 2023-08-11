#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * ppid - get the PID of the parent process
 * that the same anytime the code i srun
 */

int main(void)
{
	pid_t my_ppid;
	my_ppid = getppid();

	printf("The parent PID is _%u_\", my_ppid);
	return (EXIT_SUCCESS);
}
