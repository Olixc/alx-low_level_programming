#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Print the last digit of a number
 * @n: The number to get the last digit from
 *
 * Return: the last digit of a nummber;
 */

int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		n = -n;

	last_digit = n % 10;

	if (last_digit < 0)
		last_digit = -last_digit;

	_putchar(last_digit + '0');
	return (last_digit);

}
