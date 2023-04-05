#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at given index of list
 * @head: pointer to head
 * @index: index
 *
 * Return: 1 (success) | -1 (fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int node;
	unsigned int simpl_holder;
	listint_t *tmp_new_node;

	listint_t *rep;

	rep = *head;

	node = 0;

	simpl_holder = 0;

	if (!rep)
	{
		return (-1);
	}

	if (index == simpl_holder)
	{
		*head = (*head)->next;
		free(rep);
		return (1);
	}

	do {
		if (!rep->next)
		{
			return (-1);
		}
		rep = rep->next;
		node++;

	} while (node < (index - 1));
	tmp_new_node = rep->next;
	rep->next = tmp_new_node->next;
	free(tmp_new_node);
	return (1);
}
