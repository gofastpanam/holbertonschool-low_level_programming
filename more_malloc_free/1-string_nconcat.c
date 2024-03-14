#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - concatenates two strings.
* @s1: string
* @s2: string
* @n: numbers of char for s2
* Return: returned pointer shall point to a newly allocated space in memory
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int len1 = 0;
	int len2 = 0;
	int i, j;

	while (s1[len1])
	len1++;

	while (s2[len2])
	len2++;

	ptr = malloc(sizeof(char) * (len1 + n + 1));

	if (ptr == NULL)
	return (NULL);

	for (i = 0; s1[i] < len1; i++)
		ptr[i] = s1[i];

	for (j = 0; j < len2; j++)
		ptr[i + j] = s2[j];

	ptr[i + j] = '\0';
	return (ptr);
}
