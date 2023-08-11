#include <stdio.h>
#include <stdlib.h>

/**
 * the value of funShift(435) is ____
 */

int funShift(int num)
{
	int count = 0;	/* Counts the shift operands*/
	while (num)	/* when num !=0 we enter the loop */
	{
		count++;
		num >>= 1;
	}
	return (count);	/* returns the count at which num = 0 */
}

/**
 * main - calls the funShift()
 * @funShift(): function that does the >> operation

int main(void)
{
	funShift(435);
	printf("The value of funShitf(435) is _%d_\n", funShift(435));

	return (EXIT_SUCCESS);
}
