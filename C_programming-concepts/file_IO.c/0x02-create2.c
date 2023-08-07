#include <stdio.h>

/* create a new file, you can use the fopen() function.
 *
 * It takes two arguments
 * the filename and the mode
 * (e.g., "w" for write mode, "a" for append mode, etc.).
 */

int main()
{
	FILE *file = fopen("example.txt", "w");

	if (file == NULL)
	{
		printf("Failed to create the file: example.txt.\n");
		return (1);
	}

	/* Performing operations on the file*/
	fclose(file);

	return (0);
}
