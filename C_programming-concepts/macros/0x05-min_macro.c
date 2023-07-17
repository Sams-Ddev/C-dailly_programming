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
	
	if (x < y)
	{
		printf("%d is less than  %d\n", x, y);
	}
	else 
		printf("%d is less than %d\n", y, x);

	return (0);
}
