#include "lists.h"

/**
 * free_list - frees a linked  list.
 * @head: pointer to head of node
 */
void free_list(list_t *head)
{
	list_t *alpha_head = *head;
	list_t *beta_head;

	while (alpha_head != NULL)
	{
		beta_head = alpha_head->next;
		free(alpha_head->str);
		free(alpha_head);
		alpha_head = beta_head;
	}
}
