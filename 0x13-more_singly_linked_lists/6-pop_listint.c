#include "lists.h"

/**
 * pop_listint - removes head
 * @head: head
 * Return: 0(empty) | node data
 */

int pop_listint(listint_t **head)
{
	int node_d;

	listint_t *n_node;

	if (*head == NULL)
	{
		return (0);
	}

	node_d = (*head)->n;

	n_node = *head;
	*head = (*head)->next;

	free(n_node);
	return (node_d);
}
