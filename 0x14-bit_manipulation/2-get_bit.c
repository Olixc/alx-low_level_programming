#include "main.h"

/**
* get_bit - get the bit of a number at a specific pos.
* @index: Position of bit to find
*
* Return: the index position of bit found.
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index > 64)
		return (-1);
	for (i = 0; i < index; i++)
		n = n >> 1;

	return (n & 1);
}
