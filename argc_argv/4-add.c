#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argc: numbers of arguments
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int j;
	int res;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		res = i * j;
		printf("%d\n", res);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
