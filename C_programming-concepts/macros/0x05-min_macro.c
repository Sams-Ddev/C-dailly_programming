#include <stdio.h>

/**
 * uses the macros to evaluate the minimum number between two nums
 */

#define MIN(x, y) ((x) < (y) ? (x) : (y))

int x;
int y;

int main(void)
{
	MIN(x, y);	/*evaluates to less num*/
	
	while (x < y ? x : y)
	{
		printf("%d is less than  %d\n", x, y);
	}

	return (0);
}
