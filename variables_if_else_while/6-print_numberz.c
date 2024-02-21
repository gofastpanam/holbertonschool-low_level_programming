#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10
 * starting from 0 and followed by a new line.
 * Return: 0 (Success)
 */
int main(void)
{
int c;

for (c = 0; c < 10 ; ++c)
{
putchar(c+'0');
}
putchar('\n');
return (0);
}
