#include "main.h"

/**
* print_triangle - Prints a triangle.
* @size: the size of the triangle.
*
*/
void print_triangle(int size)
{
	if (size > 0)
	{
		int h;
		int i;

		for (h = 0; h < size; h++)
		{
			for (i = 0; i < size; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
		}
	}

	else
	{
	_putchar('\n');
	}
}
