#include <stdio.h>

#include "main.h"

/**
 * print_alphabet_x10 - print 10 times of alphabet
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char c = 'a';
	int i = 0;

	while (i < 10)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}

		i++;

		_putchar('\n');
		c = 'a';
	}
}
