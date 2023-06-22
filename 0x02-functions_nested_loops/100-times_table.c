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
			int x = i * j;

			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}

			if (x < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(x + '0');
			}
			else if (x < 100)
			{
				_putchar(' ');
				_putchar(x / 10 + '0');
				_putchar(x % 10 + '0');
			}
			else
			{
				_putchar(x / 100 + '0');
				_putchar((x / 10) % 10 + '0');
				_putchar(x % 10 + '0');
			}
		}

		_putchar('\n');
	}
}
