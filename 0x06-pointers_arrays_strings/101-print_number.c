#include "main.h"

/**
 * print_number - print integer numbers using _putchar
 * @n: The integer to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	int i = 0, sign = 1, num_digit = 0;
	int hold;
	int j = 1;


	if (n < 0)
	{
		sign = -1;
		n *= -1;
	}

	hold = n;

	while (hold != 0)
	{
		hold /= 10;
		num_digit++;
	}

	if (sign == -1)
		_putchar('-');

	for (i = 1; i < num_digit; i++)
		j *= 10;

	while (j != 0)
	{
		int digit = (n / j) % 10;

		_putchar(digit + '0');

		j /= 10;
	}
}
