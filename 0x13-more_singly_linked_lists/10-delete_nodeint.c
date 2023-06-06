#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of listint_t linked list
 * @head: pointer to the head of the list
 * @index: Index of the node that should be deleted. Index starts at 0
 *
 * Return: 1 if was deleted and -1 if on failure
 **/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	int i;
	listint_t *t;

	for (i = -1; *head != NULL; i++)
	{
		if (i + 1 == (int) index)
		{
			t = (*head)->next;
			free(*head);
			*head = t;
			return (1);
		}

		head = &(*head)->next;
	}

	return (-1);
}

