#include <stdio.h>

/**
 * the program Counts lines, words, and characters
 * with the loose definition thta a word is any sequence of
 * character that does not contain a blank, tab, tab or newline.
 *
 * This is the bare-bones version of UNIX program wc
 */

#define IN 1	/* inside a word */
#define OUT 0	/* outside a word*/

/* Count lines, words and characters in input*/

int main()
{
	int c, nl, nw, nc, state;

	state = OUT;
	nl = nw = nc = 0;

	while ((c = getchar()) != EOF)
	{
		++nc;
		if (c == '\n')
			++nl;
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if (state == OUT)
		{
			state = IN;
			++nw;
		}
	}
	printf("%d %d %d\n", nl, nw, nc);
}
