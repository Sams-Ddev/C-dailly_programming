/**
 * function Pointer in C/C++
 */

#include <stdio.h>
void PrintHello()
{
	printf("Hello\n");
}

int Add(int a, int b)
{
	return (a+b);
}

int main()
{
	int c;
	int (*p)(int, int);
	p = Add; /*Function name will return*/
	c = p(2, 3);
	printf("%d", c)
}
