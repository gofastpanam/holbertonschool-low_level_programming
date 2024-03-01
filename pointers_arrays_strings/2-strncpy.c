#include "main.h"

/**
* _strncpy - Copies a string.
* @dest: string
* @src: string to copy
* @n: number oc char
* Return: src
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != n)
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
