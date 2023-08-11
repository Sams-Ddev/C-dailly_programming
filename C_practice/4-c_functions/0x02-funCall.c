#include <stdlib.h>
#include <stdio.h>

/**
 * FunCall - returns functions by its values
 * funCall: calls a funCall() in a main() by values
 * @x: the first parameters.
 * @y: the second parameter.
 *
 * Return: EXIT_SUCCESS (0)
 */

int funCall(int x, int y)
{
	int x = 100, y = 200;

	return (x + y);
}


int main(void)
{
	/*int x = 10, y = 22; */

	printf("funCall(x, y) is = %d\n", funCall(x, y));

	return (EXIT_SUCCESS);
}
