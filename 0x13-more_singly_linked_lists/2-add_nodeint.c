#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of list
 * @head: pointer to head
 * @n: integer fto be in new node
 *
 * Return: NULL(fail) | new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_n;

	new_n = malloc(sizeof(listint_t));

	if (new_n == NULL)
	{
		return (NULL);
	}

	new_n->n = n;

	new_n->next = *head;

	*head = new_n;

	return (new_n);
}
