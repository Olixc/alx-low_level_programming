#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - execute function given as parameter
 *	on each element of the array.
 * @size: size of the array.
 * @action: pointer to the function to use.
 *
 * Return: nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
