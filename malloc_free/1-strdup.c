#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
* *_strdup - returns a pointer to a newly allocated space in memory
* @str: string
* Return: a pointer to the duplicated string, or null
*/
char *_strdup(char *str)
{
	int i;
	char *copy;

	copy = malloc(sizeof(char) * (strlen(str) + 1));

	if (copy == NULL)
	return (NULL);

	for (i = 0; str[i] != '\n'; i++)
	{
		copy[i] = str[i];
	}
	copy[1] = '\0';

	return (copy);

}
