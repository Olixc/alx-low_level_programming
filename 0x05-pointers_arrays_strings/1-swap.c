#include "main.h"

/*
 * swap_int - Swaps the value of two integers.
 * @a: The first integer value
 * @b: The second integer value
 *
 * Description: This function swaps the values of two integers
 *	by modifying the memory locations they point to.
 *	The original values are exchanged using a temporary variable.
 *	The function does not return a value.
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int hold;

	hold = *a;
	*a = *b;
	*b = hold;
}
