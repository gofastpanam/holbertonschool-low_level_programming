#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 * Return: 0 (Success)
 */
int main(void)
{
char c;

for (c = 48; c <= 57 ; ++c)
{
putchar(c);
}
for (c = 97; c <= 102 ; ++c)
{
putchar(c);
}
putchar('\n');
return (0);
}
