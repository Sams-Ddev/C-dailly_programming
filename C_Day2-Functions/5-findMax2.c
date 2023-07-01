#include <stdio.h>

/**
 * findMax2 - takes two interger paramenters
 * 'a' and 'b' and return the maximum of the two numbers
 *
 * main - this is the main function
 * calls the 'findMax2' function and prints the result
 */

//Function declaration
int findMax2(int a, int b);

//Function definition
int findMax2(int a, int b)
{
	return (a > b) ? a : b;
	/*The ? is a ternary operator that works as a conditional expression.
	 * It evaluates the condition (a > b) and returns the value before' :' 
	 * if the condition is true, and the value after : if the condition is false.*/
}

int main(void)
{
	int num1 = 10, num2 = 20;

	int max = findMax2(num1, num2);
	printf("The maximum number is %d\n", max);
	return (0);
}
