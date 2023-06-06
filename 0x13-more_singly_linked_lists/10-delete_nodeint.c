#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node of a linked list
 * @head: pointer to the node at the head of the list
 * @index: index of node
 *
 * Return: 1 if successful or -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *an;
	unsigned int i;

	listint_t *bn

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		an = *head;
		*head = an->next;
		free(an);
	}
	if (index > 0)
	{
		for (i = 0; i < index - 1; i++)
		{
			if (an->next == NULL)
				return (-1);

			an = an->next;
		}
		bn = an;
		an = an->next;
		bn->next = an->next;
		free(an);
	}
	return (1);
}
