#include "main.h"

/**
* _strspn - gets the length of a prefix substring.
* @s: string
* @accept:string
* Return: number of bytes in the initial segment
* of s which consist only of bytes from accept.
*/
unsigned int _strspn(char *s, char *accept)
{
	int i;

	for (i = 0; accept[i] != '\0'; i++)
	{
		s[i] = accept[i];
	}
	return (s[i]);
}
