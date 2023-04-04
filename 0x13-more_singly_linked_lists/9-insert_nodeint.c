#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node to a list at a given position
 * @head: pointer to head
 * @idx: index in list where node is to be added
 * @n: integer for new node
 *
 * Return: NULL | new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int node = 0;
	listint_t *new_node, *rep = *head;
	*new_node = *head;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = rep;
		*head = new_node;

		return (new_node);
	}

	while (node < (idx - 1))
	{
		if (rep->next == NULL || rep == NULL)
		{
			return (NULL);
		}

		rep = rep->next;

		node++;
	}

	new_node->next = rep->next;
	rep->next = new_node;

	return (new_node);
}
