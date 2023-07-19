#include "function_pointers.h"

/**
 * int_index - search for integer.
 * @array: hold integer number to find it's index
 * @size: size of array
 * @cmp: pointer to the function to be used to
 *	to compare values
 * Return: index of found integer.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		while (i < size)
		{
			if (cmp(array[i]) != 0)
				return (i);
			i++;
		}

	}

	return (-1);
}
