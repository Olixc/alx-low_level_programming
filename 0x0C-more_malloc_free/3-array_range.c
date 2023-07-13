#include <stdlib.h>
#include "main.h"

int *array_range(int min, int max)
{
	int *ptr, i;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(*ptr) * (max - min + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = min; i <= (max - min + 1); i++)
	{
		ptr[i] = min;
	}

	free(ptr);
	return ptr;
}
