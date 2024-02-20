#include <stdio.h>

/**
 * main - prints the alphabet in lowercase then in uppercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
char c;
char C;

for (c = 'a'; c <= 'z'; ++c)
{
putchar(c);
}
for (C = 'Z'; C <= 'Z'; ++C)
{
putchar(C);
}
putchar('\n');
return (0);
}
