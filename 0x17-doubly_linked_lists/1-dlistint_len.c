#include "lists.h"

/**
 * dlistint_len - returns the number of elements in dlistint list
 * @h: pointer to head of the list
 * Return: the number of elements in the linked list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	int c = 0;

	while (h != NULL)
	{
		c++;
		h = h->next;
	}

	return (c);
}
