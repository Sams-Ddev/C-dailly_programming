#include <stdio.h>

/**
 * Concatenation:
 * The ## operator can concatenate macro arguments or other tokens.
 * Example below:
 */

#define CONCAT(x, y) x##y \
	printf("Enter first number: \t") \
	scanf(%d, &x) \
	printf("Enter second number: \t") \
        scanf(%d, &y) \

int x;
int y;

int main(void)
{
	/*int x = c; 
	int y = d;

	int c, d;*/

	printf("This simple program uses MACROS to concatenate two numbers💻🐱‍👤\n");

	CONCAT(x, y);
	return (0);
}

/*#define CONCATENATE(x, y) x##y
int result = CONCATENATE(10, 20);  // expands to: int result = 1020;
*/
