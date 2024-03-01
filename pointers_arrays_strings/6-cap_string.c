#include "main.h"

/**
* cap_string - Capitalizes all words of a string.
* @s: the strin
*
*/
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == ',' &&  i == ';' &&  i =='.' && i == '!' && i == '?' && i == '"' && i == ')' && i  == '{' && i == '}')
		s[i] = s[i] - 32;
	}
	return (s);
}
