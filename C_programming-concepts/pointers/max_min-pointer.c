#include <stdio.h>
#include <stdlib.h>

/**
 * main - the simple program finds the lagest and smalllest of an
 * array of numbers.
 * @arr: array name
 * @max: largest number
 * @min: smallest number
 * @arr_len: array length
 *
 * Return: Always 0.
 */

int main(void)
{
	/* Array elements */
	int arr[] = {20, 1, 0, 21, 11, 92, 10.5, 201.5};
	int i, max, min, arr_len;

	arr_len = sizeof(arr) / sizeof(arr[0]);
	arr[0] = max = min;

	for (i = 0; i < arr_len; i++)
	printf("arr_len is %d\n", arr_len);
	return (EXIT_SUCCESS);
}
