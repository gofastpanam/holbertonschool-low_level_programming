#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
char c;

for (c = 48; c <= 57 ; ++c)
{
putchar(c);
}
for (c = 64; c <= 70 ; ++c)
{
putchar(c);
}
putchar('\n');
return (0);
}
