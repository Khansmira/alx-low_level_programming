#include "lists.h"

/**
 * print_list - prints elements of a list
 * @h : pointer to the head of the list
 *
 * Return: the size of elements in the node
 */
size_t print_list(const list_t *h)
{
	int s = 0;


	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d]" h->len);
			printf("%s\n" h->str);
		}
		s++;
		h = h->next;
	}
	return (s);
}
