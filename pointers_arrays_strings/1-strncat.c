#include "main.h"
#include <stdio.h>
/**
 * *_strncat - use pointer
 * @src: source pointer
 * @dest: destination pointer
 * @n: the numbers of bytes contains src
 * Return: Contact pointers
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != src[n])
	{
		dest[i++] = src[j];
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
