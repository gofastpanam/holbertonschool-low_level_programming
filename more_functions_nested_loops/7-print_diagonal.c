#include "main.h"

/**
* print_line - Draws a straight line in the terminal.
*
* @n: the number of times the character _ should be printed
*/
void print_diagonal(int n)
{

		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			int i;

			for (i = 0; i < n; i++)
		{
			_putchar('\\');
			_putchar('\n');
		}
		}
}
