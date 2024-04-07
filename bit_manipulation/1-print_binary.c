#include "main.h"
#include <unistd.h>


/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to print in binary
 */
void print_binary(unsigned long int n)
{
    /* Variable to track the position of the leftmost 1 in the binary representation */
    unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);

    /* Variable to check if at least one 1 has been found */
    int found_one = 0;

    /* Iterate over each bit of the number */
    while (mask > 0)
    {
        /* If the current bit is 1, print 1 and set found_one to 1 */
        if (n & mask)
        {
            _putchar('1');
            found_one = 1;
        }
        /* If the current bit is 0 and at least one 1 has been found, print 0 */
        else if (found_one)
        {
            _putchar('0');
        }

        /* Shift the mask one bit to the right */
        mask >>= 1;
    }

    /* If no 1's were found, print 0 */
    if (!found_one)
        _putchar('0');
}
