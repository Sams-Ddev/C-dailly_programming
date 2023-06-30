#include <stdio.h>
/*We include the <stdio.h> header file for input/output operations.*/

/**
 * main - start of the program
 * @findMax - takes three integer parameters a, b, c
 * and compares the values of the giver int parameters
 * @findMax Return - maximun value
 *
 * Return - 0 (for execution success)
 */

int findMax(int a, int b, int c);
int max;

int main(void)
{
	int num1, num2, num3;

	printf("Enter three numbers and i will show u a little magic😎\n");
	printf("Enter 1stnumber: ");
	scanf("%d", &num1);
	printf("Enter 2nd number: ");
	scanf("%d", &num2);
	printf("Enter 3rd number: ");
	scanf("%d", &num3);

	int findMax(int num1, int num2, int num3);
	int max = findMax(num1, num2, num3);

	printf("The biggest💪 of the three numbers is: %d\n", max);

	return (0);
}

/*Definition of function findMax*/
int findMax(int a, int b, int c)
{
	int max = a;

	if (b > max)
	{
		max = b;
	}
	if (c > max)
	{
		max = c;
	}

	return (max);
}
