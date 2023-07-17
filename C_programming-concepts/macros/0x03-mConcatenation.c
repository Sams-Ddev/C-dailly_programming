#include <stdio.h>

/**
 * Concatenation:
 * The ## operator can concatenate macro arguments or other tokens.
 * Example below:
 */

#define CONCATENATION(x, y) x##y

int main(void)
{
	int x, y;

	printf("This simple program uses MACROS to concatenate two numbers💻🐱‍👤\n");
	printf("Enter first number:\t");
	scanf("%d", &x);
	printf("Enter second number:\t");
        scanf("%d", &y);

	CONCATENATION(x, y);

	return (0);
}
