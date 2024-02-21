#include <stdio.h>

/**
 * main - prints the alphabet in lowercase then in uppercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
char c;

for (c = 'a'; c <= 'z'; ++c)
{
putchar(c);
}
for (c = 'Z'; c <= 'Z'; ++c)
{
putchar(c);
}
putchar('\n');
return (0);
}
