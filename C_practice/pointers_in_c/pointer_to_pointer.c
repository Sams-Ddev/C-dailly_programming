#include <stdio.h>

/**
 * A pointer to a pointer is a form of multiple indirection, or a chain of 
 * pointers.
 * Normally, a pointer contains the address of a variable.
 * When we define a pointer to a pointer,
 * the first pointer contains the address of the second pointer,
 * which points to the location that contains the actual value as shown below.
 *
*/

int main()
{
	int var;
	int *ptr;
	int **pptr;

	var = 3000;

	/*take the address of variarable named  'var' */
	ptr = &var;

	/* take the address of ptr using address of operator & */
	pptr = &ptr;

	/* take the value using pptr */
	printf("Value of var = %d\n", var);
	print("Value available at *ptr = %d\n", *ptr);
	printf("Value available ar **pptr = %d\n, **pptr ");

	return (0);

}
