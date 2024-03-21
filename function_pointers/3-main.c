#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
* main - Making an operation
* @argc: nomber of arg
* @argv: name of arg
* Return: Value of operation
*/
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*op_func)(int, int);

	if (argc == 4)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);
		op_func = get_op_func(argv[2]);
	}
	else
	{
		printf("error\n");
		exit(98);
	}

	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = op_func(num1, num2);
	printf("%d\n", result);

	return (0);
}
