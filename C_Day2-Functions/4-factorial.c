#include <stdio.h>

/**
 * main - start of the program
 * @factorial - calculates the factorial of a given
 * number recursively
 *
 * @factorial  Return - 0 on succes 
 *
 * Return - main function 0 (for execution success)
 */
int factorial(int num);

int main(void)
{
	int number;
	printf("Enter a number: ");
	scanf("%d", &number);
}

int factorial(int num)
{
	if (num == 0 || num == 1)
	{
		return (1);
	}
	else
	{
		return num * factorial(num - 1);
	}
}

