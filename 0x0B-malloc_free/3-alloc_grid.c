#include "main.h"

/**
 * alloc_grid - returns pointer to 2 dimensional array
 * @width: array width
 * @height: array height
 *
 * Return: pointer to new location in memory or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ptr = malloc(height * sizeof(*ptr));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(width * sizeof(**ptr));
		if (ptr[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(ptr[j]);
			}
			free(ptr);
			return (NULL);
		}
		for (j = 0; j < height; j++)
			ptr[i][j] = 0;
	}
	return (ptr);
}
