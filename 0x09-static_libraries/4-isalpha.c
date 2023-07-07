#include <stdio.h>
#include <ctype.h>

#include "main.h"

/**
 * _isalpha - check for uppercase
 * @c: The character to print
 *
 * Return: return 0 or 1.
 */

int _isalpha(int c)
{
	int result = isalpha(c);

	return (result ? 1 : 0);
}
