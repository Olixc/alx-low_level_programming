#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum all argument numbers.
 * @n: number of arguments expected from users.
 * @...: The numbers to be added.
 *
 * Return: sum of all arguments or numbers.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int sum, i;

	sum = 0;
	if (n == 0)
		return (0);

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, unsigned int);
	}

	va_end(ap);

	return (sum);
}
