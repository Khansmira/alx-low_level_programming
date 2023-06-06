#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to head of the list
 *
 * Return: address of node where the loop starts
 **/
listint_t *find_listint_loop(listint_t *head)
{
	 listint_t *slow;
	 listint_t *fast;

	 if (head == NULL || head->next == NULL)
	 {
		 return (NULL);
	 }

	*slow = head->next;
	*fast = head->next->next;
	while (fast && fast->next)
	{
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}

			return (slow);
		}
		slow = slow->next;
		fast = fast->next->next;
	}

	return (NULL);
}
