#include "main.h"

/**
* print_line - Draws a straight line in the terminal.
*
* @n: the number of times the character _ should be printed
*/
void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	_putchar('\n');
}
