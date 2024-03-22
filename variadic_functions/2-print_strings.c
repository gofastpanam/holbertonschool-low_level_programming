#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
* print_strings - prints string
* @separator: the separator of chars
* @n: numbers of chars
*
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *result;

	va_start(args, n);

	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			result = va_arg(args, char*);
			printf("%s", result);

			if (i < (n - 1))
			printf("%s", separator);

		}
		printf("\n");
		va_end(args);
	}
}
