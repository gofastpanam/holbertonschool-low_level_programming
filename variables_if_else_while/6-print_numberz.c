#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10
 * starting from 0 and followed by a new line.
 * Return: 0 (Success)
 */
int main(void)
{
int c;

for (c = 48; c <= 57 ; ++c)
{
putchar(c);
}
putchar('\n');
return (0);
}
