#include <stdio.h>
/**
 * print_school - prints "ALx Student"
 *
 * Return - nothing.
 */

void print_school(void)
{
	char str[] = "ALx Student";

	str[0] = 'a';
	printf("%s\n", str);
}

/**
 * main - concept introduction
 *
 * Return - 0
 */

int main(void)
{
	print_school();
	return (0);
}
