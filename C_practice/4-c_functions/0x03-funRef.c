#include <stdio.h>
#include <stdlib.h>

/**
 * funRef() - is a reference funtion by addresses called
 * int the main()
 * @x: parameter one
 * @y: parameter two
 *
 * Return: 0 (EXIT_SUCCESS)
 */

int funRef(int *x, int *y)
{
	return ();
}

/**
 * main - the main calls funRef() by memory address
 * @funref: function reference in main
 */

int main(void)
{
	int x =100, y = 200;

	funRef(&x, &y);
	return (EXIT_SUCCESS);
}
