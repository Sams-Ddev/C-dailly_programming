#include <stdio.h>

/* This small code demonstrates the use of local and global 
 * variables in details 
 */

int fun(); 	//function prototypes

int var = 0;	//global variable accessible by all functions

int main()
{
	int var = 3;
	printf("%d\n", var);
	fun();
	return (0);
}

int fun()
{
	printf("%d\n", var);
}
