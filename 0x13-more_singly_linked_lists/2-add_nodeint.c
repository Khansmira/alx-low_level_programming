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
