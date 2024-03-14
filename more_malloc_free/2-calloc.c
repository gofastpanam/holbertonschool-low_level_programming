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
	int *ptr;

	if (nmemb == 0)
	return (NULL);
	if (size == 0)
	return (NULL);

	ptr = malloc(sizeof(unsigned int) * nmemb);

	if (ptr == NULL)
	return (NULL);

	return (ptr);
}
