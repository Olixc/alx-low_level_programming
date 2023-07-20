#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Check code
 * @argc: arguements count
 * @argv: pointer to arguments value.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int arg1, arg2, result;
	char op;
	int (*func_ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);
	func_ptr = get_op_func(argv[2]);

	if (!func_ptr)
	{
		printf("Error\n");
		exit(99);
	}

	op = *argv[2];
	if ((op == '/' || op == '%') && arg2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = func_ptr(arg1, arg2);
	printf("%d\n", result);

	return (0);
}
