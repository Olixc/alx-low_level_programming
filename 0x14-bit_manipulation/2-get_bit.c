#include "main.h"

/**
 * get_bit - get the value of a bit at a particular index index.
 * @n: the number to evaluate
 * @index: index is the index starting from 0, of the bit we want to get
 *
 * Return: value of bit at index, or -1 if error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int value;

	if (index > 64)
		return (-1);

	value = n >> index & 1;

	return (value);
}
