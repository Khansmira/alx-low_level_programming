#include "lists.h"

/**
 * add_nodeint_end - adds a new node to the end of list
 * @head: pointer to head of list
 * @n: value stored in new node
 *
 * Return: pointer to node at the head of the list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *alpha_node;
	listint_t *beta_node = *head;

	alpha_node = malloc(sizeof(listint_t));
	if (alpha_node == NULL)
	{
		return (NULL);
	}

	alpha_node->n = n;
	alpha_node->next = NULL;

	if (*head == NULL)
	{
		*head = alpha_node;
		return (*head);
	}

	while (beta_node->next != NULL)
	{
		beta_node = beta_node->next;
	}
	beta_node->next = alpha_node;

	return (alpha_node);
}
