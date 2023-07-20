#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to the head of the list
 * Return: the number of nodes in list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int c = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		c++;
		h = h->next;
	}

	return (c);
}
