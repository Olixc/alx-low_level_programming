#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free memory allocated to dogs struct.
 * @d: pointer to dog instance.
 *
 * Return: nothing.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
