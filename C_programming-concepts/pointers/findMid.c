#include <stdio.h>
#include <stdlib.h>

/**
 * findMin - computes for the middle number in an
 * array of numbers.
 */

int findMid(int arr[], int n)
{
	return *(&arr[n/2]);
}

int main(void)
{
	int arr[] = {1, 2, 3, 4, 5};
	int n = sizeof(arr) / sizeof(arr[0]);

	int *mid;
	*mid = findMid(arr, n);
	printf("%ls\n", mid);

	return (EXIT_SUCCESS);
}
