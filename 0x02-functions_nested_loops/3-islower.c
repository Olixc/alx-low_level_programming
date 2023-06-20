#include <stdio.h>
#include <ctype.h>

#include "main.h"

/**
 * _islower - check for lowercase
 * @c: The character to print
 *
 * Return: return 0 or 1.
 */

int _islower(int c)
{
	int result = islower(c);

	return (result ? 1 : 0);
}
