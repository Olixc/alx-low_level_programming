#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - prints any kind of data type.
 * @format: list of types of arguments present in the function
 */
void print_all(const char * const format, ...)
{
	int i;
	char *str, *separator;

	va_list list;

	va_start(list, format);
	i = 0;
	separator = "";

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", separator, str);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(list);
}
