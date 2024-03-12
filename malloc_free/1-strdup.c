#include <stdlib.h>
#include "main.h"

/**
* *_strdup - returns a pointer to a newly allocated space in memory
* @str: string
* Return: a pointer to the duplicated string, or null
*/
char *_strdup(char *str)
{
	int i;
	int len = 0;
	char *copy;

	if (str == NULL)
	return (NULL);

	while (str[len])
	len++;

	copy = malloc(sizeof(char) * (len + 1));

	if (copy == NULL)
	return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	str[i] = copy[i];

	return (copy);
}
