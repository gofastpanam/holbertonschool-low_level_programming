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
	char *copy;

	if (str == NULL)
	return (NULL);

	for (i = 0; str[i] < '\n'; i++)
	{
		copy = malloc(sizeof(str));
	}
	return (copy);

}
