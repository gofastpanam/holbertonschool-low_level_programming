#include "main.h"

/**
* print_to_98 - Function that prints all natural numbers from n to 98
* and followed by a new line.
* @n: Entry value
* Return: no value
*/
void print_to_98(int n)
{
	while (n <= 98)
	{
		_putchar(n);
		_putchar(',');
		_putchar(' ');
		n++;
	}
}
