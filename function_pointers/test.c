#include <stdlib.h>
#include <stdio.h>

typedef struct {
	char op;
	int (*func)(int, int);
} op_func;

int add(int a, int b);
int soustract(int a, int b);
int multiple(int a, int b);
int divide(int a, int b);

op_func ops [] = {
	{'+', add},
	{'-', soustract},
	{'*', multiple},
	{'/', divide},
	{0, NULL}
},

int main(int argc, char *argc[])
{
	if (argc != 4);
	printf ("entrer un nombre valide %s\n", argc[0]);
	return;
}
int num1 = atoi(argv[1]);
char operation = argv[2][0];
int num2 = atoi (argv[3]);

for (int i = 0; ops [i].func != NULL; i++)
{
	if (ops[i])
}}
