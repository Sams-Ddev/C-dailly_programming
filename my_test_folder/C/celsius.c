#include <stdio.h>

/**
 * this program prints the degree celsius to  fahrenhiet
 * table stating from 1degree celsius to 300 degree celsius
 */

int c;
int f;

int main()
{
	for(c = 1, c <= 300, c = c+20;)
	{
		f = 1.8*c + 32;
		printf("%d \t\t %d", c, f);
	}
	return (0);
}
