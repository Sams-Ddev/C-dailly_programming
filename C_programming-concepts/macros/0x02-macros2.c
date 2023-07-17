/**
 * Substitution:
 * Macro arguments can be directly substituted into the code snippet.
 *
 * Example below
 */

/*Using Macros for substitution of values*/

#define SQUARES(x) ((x)*(x))

int main(void)
{
	SQUARES(5);	/* expands to: int result = ((5) * (5));*/
	return (0);
}
