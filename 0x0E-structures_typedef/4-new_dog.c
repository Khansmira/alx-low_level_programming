#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dog
 * @d: dog to free
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
