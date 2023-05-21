#include "main.h"
#include <stdlib.h>

/**
 * create_array - This function creates an array of char and
 * initializes it with a specific char
 * @size: size of char array
 * @c: character to fill
 *
 * Return: pointer to the array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		str = malloc(size * sizeof(char));
	}

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			str[i] = c;
		}
	}
	return (str);
}
