#include "lists.h"

/**
 * add_nodeint - adds a new node to head of a list
 * @head: pointer to head of list
 * @n: value of node
 *
 * Return: pointer to the new node at the head of list.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *alpha_node;

	alpha_node = malloc(sizeof(listint_t));
	if (alpha_node == NULL)
	{
		return (NULL);
	}

	alpha_node->n = n;
	alpha_node->next = *head;
	*head = alpha_node;

	return (alpha_node);
}

/**
 * insert_nodeint_at_index - function inserts new node at a given position
 * @head: pointer to first node at the head of the list.
 * @idx: index of the list where the new node should be added
 * @n: value of list to be added
 *
 * Return: pointer to list
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *alpha_node;
	listint_t *beta_node;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	if (idx == 0 || *head == NULL)
	{
		return (add_nodeint(head, n));
	}
	alpha_node = malloc(sizeof(listint_t));
	if (alpha_node == NULL)
		return (NULL);
	beta_node = *head;

	while (beta_node != NULL && i < idx - 1)
	{
		beta_node = beta_node->next;
		i++;
	}
	if (beta_node == NULL || beta_node->next == NULL)
	{
		free(alpha_node);
		return (NULL);
	}
	alpha_node->n = n;
	alpha_node->next = beta_node->next;
	beta_node->next = alpha_node;

	return (alpha_node);
}
