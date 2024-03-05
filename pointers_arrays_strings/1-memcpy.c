#include "main.h"
#include <stdio.h>

/**
 * *_memcpy - copies memory area
 * @src: source pointer
 * @dest: destination pointer
 * @n: bytes
 * Return: Contact pointers
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
