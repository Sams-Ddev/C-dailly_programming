#include "main.h"

/**
 * Special case: string literals
 * One special case we have seen so far is the memory used to
 * store strings that we put within double quotes  in our programs.
 * For instance:
 *
 * char *str;
 *
 * str = "Helberton"
 *
 * The string "Helberton" that was jus declared is stored automatically in memory when the program
 * is lauched. But, the memory that stores the string is only readable.
 */

/**
 * segf - Lets try a segfault \0/
 *
 * Return: nothing.
 */

void segf(void)
{
	char *str;

	str = "Helberton";
	str[0] = 'S';
}

/**
 * main - read and write concept introduction
 *
 * Return - 0.
 */

int main(void)
{
	segf();
	return (0);
}
