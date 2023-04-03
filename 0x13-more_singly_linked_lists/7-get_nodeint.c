#include "lists.h"

/**
 * get_nodeint_at_index - node locator
 * @head: head
 * @index: index
 *
 * Return: Null | node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int cnt = 0;

	for ( ; index > cnt; cnt++)
	{
		if (head == NULL)
		{
			return (NULL);
		}

		head = head->next;
	}

	return (head);
}
