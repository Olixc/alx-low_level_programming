#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * *create_array - create array of chars that
 *	return a specific char
 * @size: size of array
 * @c: the character to pass to array
 *
 * Return: array | NULL
 */
char *create_array(unsigned int size, char c)
{
	char *A;
	size_t i;

	A = malloc(sizeof(int) * size);

	if (size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		A[i] = c;
	}

	return (A);
}
