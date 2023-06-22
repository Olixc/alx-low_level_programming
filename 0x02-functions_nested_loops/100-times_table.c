#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints n times table starting from 0.
 * @n: The parameter that determine the n number to print
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			printf("%-4d", i * j);
		}
		printf("\n");
	}
}
