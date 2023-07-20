#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of dlistint list
 * @head: pointer to pointer to head of list
 * @n: value to be stored in the new node
 * Return: address of new element or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current;
	dlistint_t *alpha_node;

	alpha_node = malloc(sizeof(dlistint_t));
	if (alpha_node == NULL)
	{
		return (NULL);
	}
	alpha_node->n = n;
	alpha_node->next = NULL;
	alpha_node->prev = NULL;
	if (*head == NULL)
	{
		alpha_node->prev = NULL;
		*head = alpha_node;
		return (alpha_node);
	}

	current = *head;
	while (current->next)
	{
		current = current->next;
	}

	alpha_node->prev = current;
	current->next = alpha_node;

	return (alpha_node);
}
