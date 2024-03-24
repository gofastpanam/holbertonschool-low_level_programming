#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_all - print anything
* @format: A string containing the format specifiers
* @...: Variadic arguments to be printed
*/

void print_all(const char * const format, ...)
{
    va_list args;
    char *str_arg;
    unsigned int i = 0;
    char current_format;

    va_start(args, format);

    while (format && format[i])
    {
        current_format = format[i];

        if (current_format == 'c')
        {
            printf("%c", va_arg(args, int));
        }
        else if (current_format == 'i')
        {
            printf("%d", va_arg(args, int));
        }
        else if (current_format == 'f')
        {
            printf("%f", va_arg(args, double));
        }
        else if (current_format == 's')
        {
            str_arg = va_arg(args, char *);
            if (str_arg == NULL)
            {
                printf("(nil)");
            }
            else
            {
                printf("%s", str_arg);
            }
        }

        if (format[i + 1] && (current_format == 'c' || current_format == 'i'
                               || current_format == 'f' || current_format == 's'))
        {
            printf(", ");
        }

        i++;
    }

    va_end(args);
    printf("\n");
}
