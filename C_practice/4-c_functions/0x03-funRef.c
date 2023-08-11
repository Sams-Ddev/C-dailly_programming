#include <stdio.h>
#include <stdlib.h>

/**
 * funRef() - is a reference funtion by addresses called
 * int the main()
 * @x: parameter one
 * @y: parameter two
 * funRef(): function to reference
 *
 * Return: 0 (EXIT_SUCCESS)
 */

int funRef(int *x, int *y)
{
	*x = 10;
	*y = 20;
}

/**
 * main - the main calls funRef() by memory address
 * Return: 0 (EXIT_SUCCESS)
 */

int main(void)
{
	int x = 100, y = 200;

	funRef(&x, &y);
	printf("x = %d, y = %d", x, y);
	return (EXIT_SUCCESS);
}
