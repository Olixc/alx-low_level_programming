#include "main.h"

/**
 * print_binary - print binary numbers
 * @n: parameter n to conver to binary
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int size = 0;
	unsigned long int temp = n;

	if (n == 0)
	{
		printf("%d", 0);
		return;
	}

	/* Get the total number of bits*/
	while ((temp >>= 1) > 0)
		size++;

	while (size >= 0)
	{
		if ((n >> size) & 1)
			printf("1");
		else
			printf("0");

		size--;
	}
}
