#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocates dynamic memory
 * @b: size of memory in bytes.
 *
 * Return: pointer to type
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;
	int status;

	ptr = malloc(b);
	status = 98;

	if (ptr == NULL)
	{
		exit(status);
	}
	else
	{
		return (ptr);
	}
}
