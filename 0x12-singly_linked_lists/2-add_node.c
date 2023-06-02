#include "lists.h"

/**
 * add_node - add node to head of linked list
 * @head: double pointer to the head node.
 * @str: pointer to the string
 *
 * Return: pointer to the new head of list.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *alpha_node;
	char *copy;
	int s = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	alpha_node = (list_t *) malloc(sizeof(list_t));
	if (alpha_node == NULL)
	{
		return (NULL);
	}
	copy = strdup(str);

	if (copy == NULL)
	{
		free(alpha_node);
		return (NULL);
	}
	while (str[s])
	{
		s++;
	}

	alpha_node->len = s;
	alpha_node->str = copy;
	alpha_node->next = *head;
	*head = alpha_node;

	return (alpha_node);
}

