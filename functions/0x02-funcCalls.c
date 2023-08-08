#include <stdio.h>

/**
 * f2 - A function that hold references to address of
 * variables in memory
 */

void f2(int *a, int *b)
{
	int c;
	c = *a; *a = *b; *b = c:
}

int main()
{
	int b = 5, c = 6;

	printf("The new value of c is %d", f2(&b, &c));
	/* &b and &c are address of b and c*/
}
