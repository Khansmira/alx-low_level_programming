#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - This function allocates memory using malloc
 * @b: bytes allocate
 * Return: 98 if failed. pointer otherwise.
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	else
		return (ptr);
}
