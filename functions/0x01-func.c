#include <stdio.h>

/*
 * func() - This program evaluate the func() of a
 * right side oprand
 *
 * its a GATE- 2014 exams
 * Return (count).
 */

int func(int num)
{
	int count = 2;

	while (num)
	{
		count++;
		num >>= 2;
	}
	return (count);
}

/*
 * main - This program evaluate the func() of a
 * right side oprand
 *
 * Return (1) on success.
 */

int main(void)
{
	printf("The value returned by func(435) is _%d", func(435));
	return (0);
}
