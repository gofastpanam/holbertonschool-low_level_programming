#include "main.h"

/**
* print_alphabet_x10 - function to print aplhabet 10 times
* @void - no values in enter
* main - entry
* print alphabet
* Return: 0 (Success).
*/

void print_alphabet_x10(void)
{
    int i;
    char letter;

    for (i = 0; i < 10; i++)
    {
        letter = 'a';
        while (letter <= 'z')
        {
            _putchar(letter);
			letter++;
			return;

        }
        _putchar('\n');
	
    }
}

