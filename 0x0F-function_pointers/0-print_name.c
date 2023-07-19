#include "function_pointers.h"
#include <string.h>
#include <stdlib.h>

/**
 * print_name - prints a name.
 * @name: string name.
 * @f: function pointer
 *
 * Return: nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
