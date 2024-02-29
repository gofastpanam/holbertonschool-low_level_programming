#include "main.h"

/**
* print_array -  prints n elements of an array of integers.
* @n: the number of elements of the array to be printed.
* @a: values of array.
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");
}
