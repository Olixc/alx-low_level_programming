#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * *get_op_func - perform operation asked by the user.
 * @s: operator passed as argument to the program
 *
 * Return: returns a pointer to the function that
 *	corresponds to the operator given as a parameter.
 */
int (*get_op_func(char *s))(int, int)
{
	int i;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s) == 0)
		{
			return (ops[i].f);
		}

		i++;
	}

	return (NULL);
}
