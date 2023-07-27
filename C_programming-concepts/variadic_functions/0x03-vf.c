/*A function that calculates the factorial of numbers*/

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else {
		return n * factorial(n - 1);
	}
}
