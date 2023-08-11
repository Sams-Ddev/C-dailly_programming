#include <stdio.h>
#include <stdlib.h>

/**
 * the value of funShift(435) is ____
 */

int funShift(int num)
{
	int count = 0;
	while (num)
	{
		count++;
		num >>= 1;
	}
	return (count);
}

int main(void)
{
	funShift(435);
	printf("The value of funShitf(435) is _%d_", funShift(435));

	return (EXIT_SUCCESS);
}
