#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
* Return: if the last digit of n is greater than 5,
* and is less than 6 and not 0,
* and if the last digit of n is 0: the string and is 0.
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

int LastDigitOf;
LastDigitOf = n % 10;

if (LastDigitOf > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, LastDigitOf);
}
else if (LastDigitOf == 0)
{
printf("Last digit of %d is %d and is 0\n", n, LastDigitOf);
}
else if (LastDigitOf < 6 && LastDigitOf != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, LastDigitOf);
}
	return (0);
}
