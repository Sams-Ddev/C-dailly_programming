/*
 * A function - 
 * wordCount() - a function that counts word, lines, tab '\t' and blank space '\b'
 *
 *With the loose definition that a word is any sequence of characters
 *or a newline.
 
 *This is a bare-bones version of the UNIX program "wc"
 */

#include <stdio.h>

#define IN 1	/* Inside a word*/
#define OUT 0	/* outside a word*/

/* count lines, words, and characters in input */

int main()
{
	int c, nl, nw, nc, state;
	/*c - char, nl- newline, nw - new word, nc- new char, state- inside a word or not*/

	state = OUT;
	nl = nw = nc = 0;
	while ((c = getchar()) != EOF)
	{
		++nc;
		if (c == '\n')
			++nl;
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if (state == OUT){
			state = IN;
			++nw;
		}

	}
	print("%d %d %d\n", nl, nw, nc);
}
