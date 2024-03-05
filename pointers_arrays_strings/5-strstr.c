#include "main.h"

/**
* _strstr - locates a substring.
* @haystack: first string
* @needle: second string
* Return: the beginning of the located substring, or NULL if not found
*/
char *_strstr(char *haystack, char *needle)
{
	int i, j;
	int found;
	char *result = NULL;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		found = 0;

		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				found = 1;
				break;
			}
		}

		if (found == 0)
		{
			result = &haystack[i];
			break;
		}
	}
	return (result);
}
