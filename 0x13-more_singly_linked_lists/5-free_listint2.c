#include "lists.h"

/**
 * free_listint2 - frees listint_t list
 * @head: listint_t pointer
 * Return: nil
 */

void free_listint2(listint_t **head)
{
	listint_t *temp_node;

	while (*head)
	{
		temp_node = (*head)->next;
		free(*head);
		*head = temp_node;
	}

	head = NULL;	

	if (head == NULL)
	{
		return;
	}
}
