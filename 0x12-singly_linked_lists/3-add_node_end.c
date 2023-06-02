#include "lists.h"

/**
 * add_node_end - function adds node to end of linked list
 * @head: a double pointer to list_t
 * @str: pointer to the string
 *
 * Return: pointer to the new head of list or NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *beta_node;
	list_t *beta_head;
	int s = 0;
	char *copy;

	beta_node = (list_t *)malloc(sizeof(list_t));
	if (beta_node == NULL)
	{
		return (NULL);
	}

	copy = strdup(str);
	if (copy == NULL)
	{
		free(beta_node);
		return (NULL);
	}

	while (str[s])
	{
		s++;
	}

	beta_node->str = copy;
	beta_node->len = s;
	beta_node->next = NULL;

	if (*head == NULL)
	{
		*head = beta_node;
	}
	else
	{
		beta_head = *head;
		while (beta_head->next != NULL)
			beta_head = beta_head->next;
		beta_head->next = beta_node;
	}

	return (beta_node);
}
