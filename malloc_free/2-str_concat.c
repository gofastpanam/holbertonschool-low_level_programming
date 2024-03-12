#include "main.h"
#include <stdlib.h>

/**
* *str_concat - concatenates two strings
* @s1: string 1
* @s2: string 2
* Return: newly allocated space in memory which contains s1 + s2 and null
*/
char *str_concat(char *s1, char *s2)
{
	int i, j;
	int len1 = 0;
	int len2 = 0;
	char *duplicate;

	while (s1[len1])
	len1++;

	while (s2[len2])
	len2++;

	duplicate = malloc(sizeof(char) * (len1 + len2 + 1));

	for (i = 0; s1[i] != '\0'; i++)
	duplicate[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++)
	duplicate[i + j] = s2[j];

	duplicate[i + j] = '\0';

	return (duplicate);
}
