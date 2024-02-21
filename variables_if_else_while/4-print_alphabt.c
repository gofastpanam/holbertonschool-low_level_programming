#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * Expect letters q and e
 * Return: 0 (Success)
 */
int main(void)
{
char c;

while (c == 'q' && c == 'e')
{
putchar('\n');
return (0);
}
for (c = 'a' ; c <= 'z' ; ++c)
{
putchar(c);
}
putchar('\n');
return (0);
}
