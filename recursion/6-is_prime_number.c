#include "main.h"

/**
* is_prime_number -  returns 1 if the input integer is a prime number, otherwise return 0
* @n: integer
* Return: 1 if the input integer is a prime number, otherwise return 0
*/
int is_prime_number(int n)
{
	if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0)
	{
		return (0);
	}
	return (1);
}
