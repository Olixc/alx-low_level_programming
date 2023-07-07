#include "main.h"
#include "string.h"

/**
 * _print_rev_recursion - print a string in reverse.
 * @s: String to reverse.
 *
 * Return: void.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
