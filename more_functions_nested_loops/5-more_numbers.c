#include "main.h"

/**
* print_numbers - Prints the numbers, from 0 to 9, followed by a new line.
* not print 2 and 4.
* @c: Number to print from 0 to 9.
*
*/
void more_numbers(void)
{
	int b;
	for (b = 0; b <= 10; b++)
	{
	int c;
	for (c = '0'; c <= '14'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
	}
}
