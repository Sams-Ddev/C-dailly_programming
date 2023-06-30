#include <stdio.h>
/*This is a header file provides input/output functionalities*/

/**
 * In the below code, we have created a function named 'func_square'
 * @num : takes an integer parameter 'num'.
 * func_square - function calculates the square of 'num'.
 *
 * Returns - the result of the execution.
 *
 * main - start of prigram
 * return - 0 (for success)
 */

/*We declare the function (func_square) below*/
int func_square(int num);

/*Definition of the function (func_square)*/
int func_square(int num)
{
	int num;
	int result;

	result = num * num;

	return (result);
}

/*main - start of program*/
int main(void)
{
	int num1;

	printf("Enter a number:");	/*takes user input*/
	scanf("%d", &num1);	/*stores user input in var num1*/

	int result1 = func_square(num1);	/*calling the function*/

	printf("The square of %d is %d", num1, result1);

	return (0);
}
