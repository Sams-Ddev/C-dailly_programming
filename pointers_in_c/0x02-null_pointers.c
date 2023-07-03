#include <stdio.h>

/**null pointers
 *
 * The NULL pointer is a constant with a value of zero defined in several
 * standard libraries. Consider the following program −*/

int main(void)
{
	int *ptr = NULL;

	printf("The value of ptr is ; %x\n", ptr );

	return (0);
}

/*
 * When the above code is compiled and executed, it produces the following result
 * −
 *
 * The value of ptr is 0*/
