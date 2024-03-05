#include "main.h"

/**
* print_diagsums - prints the sum of the two diagonals
* of a square matrix of integers.
* @a: integers
* @size: size
*/
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int result;

	for (i = 0; a[i] < size; i++)
	{
		for (j = 0; a[j] < size; j++)
		{
			result = (a[i]) + (a[j]);
			printf("%d\n", result);
		}
	}
	printf("\n");
}
