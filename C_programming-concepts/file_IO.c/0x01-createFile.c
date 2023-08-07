#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* This is a demonstration of file handling in C
 *
 * These are the function in the standard library
 * fopen(), fclose(), getc, putc(), getw(), putw()*/

int main(void)
{
	/*Declaring a file pointer varaiables*/
	FILE *fp;
	fp = fopen("filename.txt", "w");

	/* Processing of fie*/
	fprintf(fp, "%s", "Hey, am Zerd!\n");

	/*End of file processing*/
	fclose(fp);

	return (0);
}
