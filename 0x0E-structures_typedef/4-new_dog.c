#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - new dog function
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: newdog struct or NULL if function fails.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_dog, *owner_dog;
	int i = 0, j = 0;
	int len1, len2;

	if (name == NULL || owner == NULL)
		return (NULL);
	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	name_dog = malloc(sizeof(char) * i + 1);
	if (name_dog == NULL)
	{
		free(name_dog);
		return (NULL);
	}
	for (len1 = 0; len1 <= i; len1++)
		name_dog[len1] = name[len1];
	owner_dog = malloc(sizeof(char) * j + 1);
	if (owner_dog == NULL)
	{
		free(owner_dog);
		free(new_dog);
		return (NULL);
	}
	for (len2 = 0; len2 <= j; len2++)
		owner_dog[len2] = owner[len2];
	new_dog->name = name_dog;
	new_dog->owner = owner_dog;
	new_dog->age = age;

	return (new_dog);
}
