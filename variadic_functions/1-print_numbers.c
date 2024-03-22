#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_numbers - print numbers followed by a new line
* @separator: the separator of numbers ","
* @n: numbers
* Return: 0
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int result = 0;

	va_start(args, n);

	if (separator !=  NULL)
	{
		for (i = 0; i < n; i++)
		{
			result = va_arg(args, int);
			printf("%d", result);
			
			if (i != (n - 1))
			printf("%s", separator);
		}
		printf("\n");
		va_end(args);
	}
}
