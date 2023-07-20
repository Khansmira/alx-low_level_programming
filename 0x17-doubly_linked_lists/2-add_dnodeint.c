#include "lists.h"

/**
 * add_dnodeint - adds new node to beginning of dlistint list
 * @head: pointer to a pointer to the head of the doubly linked list.
 * @n: value to be stored in new node.
 * Return: address of the new element or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *alpha_node;

	alpha_node = malloc(sizeof(dlistint_t));
	if (alpha_node == NULL)
	{
		return (NULL);
	}
	alpha_node->n = n;
	alpha_node->next = *head;
	alpha_node->prev = NULL;
	if (*head != NULL)
	{
		(*head)->prev = alpha_node;
	}
	*head = alpha_node;

	return (alpha_node);
}
