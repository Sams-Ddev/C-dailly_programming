#include <stdio.h>

/**
 * checkEvenOdd - takes an interger parameter 'num'
 * and checks if its an even number or odd number
 * The function prints the corresponding mesage
 *
 * main - calls the 'checkEvenOdd' function with a number
 * we take an interger 7 for this example
 */

//Function declaration
int checkEvenOdd(int num);

//Function definition
int checkEvenOdd(int num)
{
	if (num % 2 == 0)
	       printf("%d is even\n", num);
	else
		printf("%d is odd\n", num);
}

//start of program
int main(void)
{
	int num = 7;

	checkEvenOdd(num);	//function call

	return (0);
}
