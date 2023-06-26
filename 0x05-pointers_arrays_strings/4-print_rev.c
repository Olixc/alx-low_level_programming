#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: The string value.
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i;
	int s_length = strlen(s);

	for (i = s_length - 1; i > 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
