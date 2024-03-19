#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
* array_iterator - executes a function given as a parameter
* on each element of an array.
* @array: array
* @size: size
* @action: - function pointer
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		action(array[i]);
	}
}
