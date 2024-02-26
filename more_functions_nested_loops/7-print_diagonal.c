#include "main.h"

/**
* print_diagonal - Draws a diagonal line on the terminal.
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
			int j;

			for (j = 0; j < i; j++)
			{
				_putchar (' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
		}
}
