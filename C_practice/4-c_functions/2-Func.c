#include <stdio.h>
#include <stdbool.h>

/**
 * isPrime - checks wether a given number 'num'
 * is a prime or not.
 * @num - integer passes as argument
 *
 * Return - function returns a boolean value
 * ('true' if number is prime and 'false' otherwise)
 */

bool isPrime(int num)
{
	if (num <= 1)
	{
		return (false);
	}

	for (int i = 2; i * i <= num; i++)
	{
		if (num % i == 0)
		{
			return (false);
		}

		else
		{
			return (true);
		}
	}

	return (true);
}

/**
 * main - start of program
 * call the function 'isPrime'
 *
 * return - 0 (for successful execusion)
 */

/*functionn declaration*/
bool isPrime(int num);

int main(void)
{
	int number;

	printf("Enter any number:");
	scanf("%d", &number);

	if (isPrime(number))
	{
		printf("%d is a prime number.\n", number);
	}
	else
	{
		printf("%d is not a prime number.\n", number);
	}

	return (0);

}
