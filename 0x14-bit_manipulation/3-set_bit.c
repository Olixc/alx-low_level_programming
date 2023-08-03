#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: the number to evaluate
 * @index:  the index, starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int value;

	if (index > 64)
		return (-1);

	value = 1;
	while (index > 0)
	{
		value *= 2;
		index--;
	}

	*n = *n + value;

	return (value);
}
