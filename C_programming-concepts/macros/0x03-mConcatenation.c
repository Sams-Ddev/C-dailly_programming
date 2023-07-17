#include <stdio.h>

/**
 * Concatenation:
 * The ## operator can concatenate macro arguments or other tokens.
 * Example below:
 */

#define CONCAT(x, y) x##y
#define NUM1 x
#define NUMB2 y

int x = c
int y = d;
int c, d;

int main(void)
{
	int x = c; 
	int y = d;

	int c, d;

	printf("This simple program uses MACROS to concatenate two numbers💻🐱‍👤\n");
	printf("Enter first number:\t");
	scanf("%d", &c);
	printf("Enter second number:\t");
        scanf("%d", &d);

	CONCAT(x, y);
	printf("Cocatenation of %ls and %ls is :\t", x, y);

	return (0);
}

/*#define CONCATENATE(x, y) x##y
int result = CONCATENATE(10, 20);  // expands to: int result = 1020;
*/
