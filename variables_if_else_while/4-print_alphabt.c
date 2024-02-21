#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * Expect letters q and e
 * Return: 0 (Success)
 */
int main(void)
{
char c;

for (c = 'a' ; c <= 'z' ; ++c)
{
if (c != 'q' && c != 'e')
{
putchar('\n');
}
putchar(c);
}

return (0);
}
