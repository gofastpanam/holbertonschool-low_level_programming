#include "main.h"

/**
* _strncpy: Copies a string.
* @dest: the s
*
*/
char *_strncpy(char *dest, char *src, int n);
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
