#include "main.h"
/**
 * puts_half - Prints half of a string.
 * @str: The string.
 *
 */
void puts_half(char *str)
{
	int i = 0;
	int j;

	while (str[i] != '\0')
	{
		i++;
	}
		if (i % 2 != 0)
		{
			i++;
		}

	j = i / 2;

	while (str[j] != '\0')
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
