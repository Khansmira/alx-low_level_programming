#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @head: head of the list
 *
 * Return: size of freed list
 **/
size_t free_listint_safe(listint_t **head)
{
	size_t i;
	int f;
	listint_t *an;

	for (i = f = 0; *head != NULL || f; i++)
	{
		if (*head <= (*head)->next)
		{
			f = 1;
			break;
		}

		an = (*head)->next;
		free(*head);
		*head = an;
		f = 0;
	}

	if (f)
	{
		an = (*head)->next;
		free(*head);
		i++;
	}

	*head = NULL;
	return (i);
}
