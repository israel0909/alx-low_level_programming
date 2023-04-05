#include "lists.h"

/**
 * find_listint_loop - finds loop in list
 * @head: pointer to head of list
 *
 * Return: NULL | node of loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *loop1 = head->next;
	listint_t *loop2 = (head->next)->next;

	if (!head->next)
	{
		return (NULL);
	}

	if (!head)
	{
		return (NULL);
	}

	for ( ; loop2; )
	{
		if (loop2 == loop1)
		{
			loop1 = head;

			for ( ; loop2 != loop1; )
			{
				loop2 = loop2->next;
				loop1 = loop1->next;
			}

			return (loop1);
		}

		loop2 = (loop2->next)->next;

		loop1 = loop1->next;
	}

	return (NULL);
}
