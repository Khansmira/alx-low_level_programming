#include "lists.h"

/**
 * reverse_listint - reverse a listint_t list
 * @head: pointer to head pointer
 * Return: pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *t, *a;

	if (!head)
	{
		return (0);
	}

	a = NULL;

	while (*head)
	{
		t = (*head)->next;
		(*head)->next = a;
		a = *head;
		*head = t;
	}

	*head = a;

	return (*head);
}
