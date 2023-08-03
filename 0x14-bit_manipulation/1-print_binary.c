#include "main.h"

/**
 * print_binary - print converted decimal to binary number.
 * @n: decimal number to be converted to binary.
 *
 * return: nothing.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask;
	int flag;

	if (n == 0)
	{
		printf("0");
		return;
	}
	mask = n;
	flag = 0;

	while (mask > 0)
	{
		mask >>= 1;
		flag++;
	}

	while (flag > 0)
	{
		flag--;

		if ((n >> flag) & 1)
			printf("1");
		else
			printf("0");
	}
}
