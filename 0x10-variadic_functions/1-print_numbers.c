#include <stdarg.h>
#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - print numbers followed by a new line.
 * @separator: string printed between numbers.
 * @n: number of integers passed to function.
 *
 * Return: nothing.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	if (separator == NULL)
		return;

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, unsigned int));
		if (i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(ap);
}
