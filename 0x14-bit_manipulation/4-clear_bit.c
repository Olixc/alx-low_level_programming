#include "main.h"

/**
 * clear_bit - set the value of a bit to 0 at a given index
 * @n: pointer to decimal number to be converted.
 * @index: the index, starting from 0 of the bit you want to set.
 *
 * Return: 1 if it worked, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned int value;

	if (index > 64)
		return (-1);

	value = index;
	i = 1;

	while (value > 0)
	{
		i *= 2;
		value--;
	}

	if ((*n >> index) & 1)
		*n = *n - i;
	return (1);
}
