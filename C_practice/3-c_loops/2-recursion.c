#include <stdio.h>

/**
 * factorial - function takes a inter arguement and calulates the factorial
 * and prints it to screen
 * this example demonstrate the use of recursive functions
 */

int factorial(int n)
{
	int res, i;

	res = 1;
	i = 1;
	while (i <= n)
	{
		res = res * i;
		i++;
	}
	return (res);
}

int main(void)
{
	int f;

	f = factorial(5);
	printf("5! =  %d\n", f);

	return (0);
}
