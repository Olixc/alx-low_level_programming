#include <stdlib.h>
#include "main.h"

int *array_range(int min, int max)
{
	int *ptr, i, size;

	if (min > max)
		return (NULL);

	else
		size = max - min + 1;

	ptr = (int*)malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = min + i;

	return (ptr);
}
