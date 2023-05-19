#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers from min to max inclusive
 * @min: minimum value for array
 * @max: maximum value for array
 *
 * Return: Pointer to new array or NULL on failure
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int p;

	if (min > max)
	{
		return (NULL);
	}

	p = max - min + 1;

	ptr = malloc(p * sizeof(int));
	if (ptr == 0)
	{
		return (NULL);
	}

	for (i = 0; i < p; i++)
	{
		ptr[i] = min + i;
	}

	return (ptr);
}
