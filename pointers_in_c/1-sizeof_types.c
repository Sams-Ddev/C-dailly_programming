/**
 * main - using sizeof to dynamically determine the size of types char, int and float
 *
 * main - using sizeof to dynamically determine the size of types char, int, and floats
 *
 * Return: Always 0.
 */

int main(void)
{
	int n;

	printf("Size of tyoe 'char' on my computer: %lu bytes\n", sizeof(char));
	printf("Size of type 'int' on my computer: %lu bytes\n", sizeof(int));
	printf("Size of type 'float' on my computer: %lu bytes\n", sizeof(float));
	printf("Size of type of my variable n on my computer: %lu bytes\n", sizeof(n));

   return (0);
}
