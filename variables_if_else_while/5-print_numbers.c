#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10
 * starting from 0 and followed by a new line.
 * Return: 0 (Success)
 */
int main(void)
{
int c;
for (c = 0 ; c < 10 ; ++c)
{
printf("%d", c);
}
printf("\n");
return (0);
}
