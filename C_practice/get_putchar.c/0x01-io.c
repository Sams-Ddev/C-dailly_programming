#include <stdio.h>

/**
 * this is small program depicts the use of getchar and putchar 
 * to take a single character and prints it the standard 
 * output without using a scanf and printf
 */

int main(void)
{
	int c;

	while (c = getchar() != EOF)
		putchar(c);
}
