#include <stdio.h>

/* File copying
 * using the inbuilt 'getchar() and putchar()'
 *
 * The small program copy char from input and 
 * prints it into the the standard output
*/

/* First version of code*/
int main()
{
	int c;
	c = getchar();
	while (c != EOF)
	{
		putchar(c);
		c = getchar();
	}
}
