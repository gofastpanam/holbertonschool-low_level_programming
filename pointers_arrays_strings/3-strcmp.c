#include "main.h"

/**
* _strcmp - Compares two strings.
* @s1: string 1
* @s2: string 2
* Return: The comparaison
*/
int _strcmp(char *s1, char *s2)
{
	int i;
	int j;
	int cmp = 0;

	for (i = 0; s1[i] < '\0'; i++)
	;
	for (j = 0; s2[j] < '\0'; j++)
	;

	if (i < j)
	cmp = j - i;
	else if (i > j)
	cmp = i - j;

	return (cmp);
}
