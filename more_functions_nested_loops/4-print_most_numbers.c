#include "main.h"

/**
* print_numbers - Prints the numbers, from 0 to 9, followed by a new line.
* not print 2 and 4.
* @c: Number to print from 0 to 9.
*
*/
void print_most_numbers(void)
{
	int c;
	for (c = '0'; c <= '9'; c++)
	{
		if (c != '2' && c != '4')
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}

