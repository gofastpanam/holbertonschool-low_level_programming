#include "main.h"
#include <stdlib.h>

/**
* _calloc - allocates memory for an array
* @nmemb: elements
* @size: bytes
* Return: a pointer to the allocated memory.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;
	char *zero;

	if (nmemb == 0)
	return (NULL);
	if (size == 0)
	return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	return (NULL);

	zero = ptr;

	for (i = 0; i < nmemb * size; i++)
	{
		zero[i] = 0;
	}

	return (ptr);
}
