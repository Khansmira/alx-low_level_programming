#include "lists.h"

/**
 * free_listint2 - frees a list.
 * @head: pointer to the node on the head of list
 */

void free_listint2(listint_t **head)
{
	
	listint_t *alpha_node = *head;
	listint_t *beta_node;

	if (head == NULL)
		return;
	while (alpha_node != NULL)
	{
		beta_node = alpha_node->next;
		free(alpha_node);
		alpha_node = beta_node;
	}
	*head = NULL;
}
