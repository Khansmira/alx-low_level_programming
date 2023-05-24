#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes function given as a parameter on
 * each element of an array
 * @size: size of the array
 * @action: pointer to a function
 * @array: array given
 *
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL || array == NULL)

	return;
	{
		void (*print)(int) = action;

		for (i = 0; i < size; i++)
			print(array[i]);
	}
}
