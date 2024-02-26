#include "main.h"

/**
* print_square - Prints a square.
* @size: the size of the square.
*
*/
void print_square(int size)
{
	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}

}
