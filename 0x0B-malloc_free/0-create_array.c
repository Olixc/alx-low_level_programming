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
	unsigned int i;

	if (size == 0)
		return (NULL);

	A = malloc(sizeof(char) * size);

	if (A == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		A[i] = c;
	}

	return (A);
}
