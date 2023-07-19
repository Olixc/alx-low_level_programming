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
	char *name_cpy;
	
	name_cpy = malloc(sizeof(char) * (strlen(name) + 1));

	strcpy(name_cpy, name);

	f(name_cpy);
}
