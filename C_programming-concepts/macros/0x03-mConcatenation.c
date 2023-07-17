#include <stdio.h>

/**
 * Concatenation:
 * The ## operator can concatenate macro arguments or other tokens.
 * Example below:
 */

#define CONCAT(x, y) x##y

int main(void)
{
	int x, y;

	printf("This simple program uses MACROS to concatenate two numbers💻🐱‍👤\n");
	printf("Enter first number:\t");
	scanf("%d", &x);
	printf("Enter second number:\t");
        scanf("%d", &y);

	CONCAT(&x, &y);
	printf("Cocatenation of %ls and %ls is :\t", &x, &y);

	return (0);
}
