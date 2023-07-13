#include <stdlib.h>
#include "main.h"

/**
 * *_calloc - allocates memory for an array using malloc
 * @nmemb: number of members
 * @size: size to be allocated.
 *
 * Return: newly allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;
	char *char_ptr;

	i = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	char_ptr = (char *)ptr;

	while (i < nmemb * size)
	{
		char_ptr[i] = 0;
		i++;
	}

	return (ptr);


}
