#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously
 *	allocated with a call to malloc: malloc(old_size)
 * @old_size:size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block
 *
 * Return: newly allocated pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		else
			return (new_ptr);

	}
	if (new_size == 0 && ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size > old_size)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		memcpy(new_ptr, ptr, old_size);
	}
	else
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		memcpy(new_ptr, ptr, new_size);
	}

	free(ptr);

	return (new_ptr);
}
