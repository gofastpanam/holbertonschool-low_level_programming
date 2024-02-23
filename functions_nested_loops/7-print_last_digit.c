#include "main.h"

/**
* print_last_digit - The function that prints the last digit of a number
* Return: The value of the last digit
*
*
*/
int print_last_digit(int r)
{
	int i;
	i = 3;
	r = i % 10;
	_putchar(r);
	return (r);
}
