#include "main.h"

/**
 * set_bit - set the bit of a number at a specific pos.
 * @index: Position of bit to set
 * @n: Number to set bit in
 *
 * Return: the index position of bit found.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > 64)
		return (-1);

	mask = mask << index;
	*n = *n | mask;

	return (1);
}
