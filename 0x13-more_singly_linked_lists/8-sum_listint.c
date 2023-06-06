#include "lists.h"

/**
 * sum_listint - returns sum of all the data(n) of the linked list.
 * @head: pointer to the first node at the head of the list.
 *
 * Return:sum of the elements in the list otherwise or 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	listint_t *alpha_node = head;
	unsigned int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (alpha_node != NULL)
	{
		sum = sum + alpha_node->n;
		alpha_node = alpha_node->next;
	}

	return (sum);
}
