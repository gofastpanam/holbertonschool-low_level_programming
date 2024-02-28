#include "main.h"

/*
*
*
*/
void puts2(char *str)
{
	int i;

    for (i = 1; str[i] > '\0'; i++)
    {
        _putchar(str[i]);
    }
    _putchar('\n');
}
