#include "lists.h"

/**
 * list_len - prints the elements of a list
 * @h: pointer to the head of the list
 *
 * Return: size of elements in the linked list.
 */

size_t list_len(const list_t *h)
{
	size_t s = 0;

	while (h != NULL)
	{
		s++;
		h = h->next;
	}
	return (s);
}
