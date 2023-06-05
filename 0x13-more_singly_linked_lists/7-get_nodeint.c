#include "lists.h"

/**
 * get_nodeint_at_index - function gets the nth node of a linked list
 * @head: pointer to node 0
 * @index: index at node 0
 *
 * Return: pointer to the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *alpha_node = head;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (alpha_node != NULL)
	{
		if (i == index)
		{
			return (alpha_node);
		}
		i++;
		alpha_node = alpha_node->next;

	}
	return (NULL);
}
