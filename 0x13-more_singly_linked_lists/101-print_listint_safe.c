#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: Head of the list
 *
 * Return: number of elements of the list
 **/
size_t print_listint_safe(const listint_t *head)
{
	int i, f;

	if (head == NULL)
	{
		return (0);
	}

	for (i = f = 0; head != NULL || f; i++)
	{
		printf("[%p] %d\n", (void *) head, head->n);

		if (head <= head->next)
		{
			f = 1;
			break;
		}

		head = head->next;
		f = 0;
	}

	if (f)
	{
		head = head->next;
		printf("-> [%p] %d\n", (void *) head, head->n);
		i++;
	}

	return (i);
}
