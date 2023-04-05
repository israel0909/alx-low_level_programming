#include "lists.h"

/**
 * reverse_listint - reverses a list
 * @head: hesd pointer
 *
 * Return: reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *frwd;

	listint_t *behd = NULL;

	for ( ; (*head)->next; )
	{
		frwd = (*head)->next;

		(*head)->next = behd;

		behd = *head;

		*head = frwd;
	}

	(*head)->next = behd;

	return (*head);
}
