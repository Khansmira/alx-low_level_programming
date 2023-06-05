#include "lists.h"

/**
 * pop_listint -  deletes the head node of a linked list.
 * @head: pointer to first node
 *
 * Return: head node's data(n) or 0 if the list is NULL
 */

int pop_listint(listint_t **head)
{
	listint_t *alpha_node = *head;
	int n;
	listint_t *fhead;

	if (*head == NULL)
		return (0);

	n = alpha_node->n;
	fhead = alpha_node->next;
	*head = fhead;

	free(alpha_node);

	return (n);
}
