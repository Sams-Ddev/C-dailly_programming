#include <stdio.h>

/*
*description of main the main function is a while loop
*that prints the next 10 interger counts starting from 10
*
**/

int main(void)
{
	/*Definition of local variable*/
	int v_a = 10;

	/*while loop execution*/
	while (v_a < 20)
	{
		printf("Value of a: %d\n", v_a);
		v_a++;
	}
	return (0);
}
