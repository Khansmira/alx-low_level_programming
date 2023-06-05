#include "lists.h"

/**
 * listint_len - outputs the number of elements of the list
 * @h: pointer to head of list.
 *
 * Return: number of elements in list
 */

size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}

	return (n);
}
