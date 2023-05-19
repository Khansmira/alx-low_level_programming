#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function allocates memory for an array using malloc
 * @nmemb: number of elements in the array
 * @size: size of each element in bytes
 *
 * Return: Pointer to allocated memory or NULL on failure
 */
#include <stdlib.h>
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i, p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(size * nmemb);
	if (ptr == NULL)
	{
		return (NULL);
	}
	/* set allocated memory to 0 */
	p = nmemb * size;
	for (i = 0; i < p; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
