#include "lists.h"

/**
 * add_nodeint_end - adds node at end oflistint_t
 * @n: pointer to struct
 * @head: pointer to head
 *
 * Return: elements
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_n;
	listint_t *tmp_new_node;

	new_n = malloc(sizeof(listint_t));
	if (new_n == NULL)
	{
		return (NULL);
	}

	new_n->next = NULL;

	new_n->n = n;

	if (*head == NULL)
		*head = new_n;
	else
	{
		tmp_new_node = *head;

		while (tmp_new_node->next != NULL)
		{
			tmp_new_node = tmp_new_node->next;
		}

		tmp_new_node->next = new_n;
	}

	return (new_n);
}
