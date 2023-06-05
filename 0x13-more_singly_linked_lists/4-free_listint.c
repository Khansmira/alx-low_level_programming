#include "lists.h"

/**
 * free_listint - frees a list.
 * @head: pointer to the node on the head of the list
 */

void free_listint(listint_t *head)
{
	listint_t *alpha_node = head;
	listint_t *beta_node;

	while (alpha_node != NULL)
	{
		beta_node = alpha_node->next;
		free(alpha_node);
		alpha_node = beta_node;
	}
}
