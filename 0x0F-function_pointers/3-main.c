#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Check code
 * @argc: arguements count
 * @argv: pointer to argumen value.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int arg1, arg2, result, status;
	char op;
	int (*func_ptr)(int, int);

	if (argc != 4)
	{
		status = 98;
		printf("Error\n");
		exit(status);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);
	func_ptr = get_op_func(argv[2]);

	if (!func_ptr)
	{
		status = 99;
		printf("Error\n");
		exit(status);
	}

	op = *argv[2];
	if ((op == '/' || op == '%') && arg2 == 0)
	{
		status = 100;
		printf("Error\n");
		exit(status);
	}

	result = func_ptr(arg1, arg2);

	printf("%d\n", result);
	return (0);
}
