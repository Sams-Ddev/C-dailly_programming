#include <stdio.h>
#include <stdlib.h>

/**
 * funShift() - does a >> operations
 * @num: number to operate on.
 * @count: number of shift >> done
 * for num = 0.
 */

int funShift(int num)
{
	int count = 2;
	while (num)
	{
		count++;
		num >>= 2;
	}
	return (count);
}

/**
 * main - calls funShift
 */

int main()
{
	funShift(435);
	printf("The value returned by funShift(435) on >>2 is _%d_", funShift(435));
	return (EXIT_SUCCESS);
}
