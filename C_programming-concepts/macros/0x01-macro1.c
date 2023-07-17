/**
 * Macro Argument Syntax:
 * The syntax for defining a macro with arguments is as follows:
 *
 * Copy code
 * #define MACRO_NAME(parameter1, parameter2, ...) code_snippet
 */

#include <stdio.h>
#define PRINT_ARGUMENT(x) printf("Argument to print : %s\n", #x)

int main(void)
{
	PRINT_ARGUMENT(Hello! world);	// expands to: printf("Argument: %s\n", "Hello")
	return (0);
}

