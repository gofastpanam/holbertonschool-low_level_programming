#include "main.h"

/**
* _strpbrk - searches a string for any of a set of bytes.
* @s: the string to be scanned.
* @accept: the string containing the characters to match.
* Return: a pointer to the byte in s.
*/
char *_strpbrk(char *s, char *accept)
{
	int found;
	int count;
	int i;
	int j;
	char *match;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				match = &accept[j];
				found = 1;
				break;
			}
		}
		if (found == 0)
		break;
	}
	return (match);
}
