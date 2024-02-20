#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
* Return: if the number is greater than 0: is positive
* if the number is 0: is zero
* if the number is less than 0: is negative
*/

/* betty style doc for function main goes there */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

printf("%d", n)

if (n > 0)
{
printf("is positive/n")
}
else if (n == 0)
{
printf("is zero/n")
}
else(n < 0)
{
printf("is negative/n")
}
/* your code goes there */
return (0);
}
