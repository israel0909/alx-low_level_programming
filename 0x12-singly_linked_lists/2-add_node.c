#include "lists.h"

/**
 * add_node - adds new node at the beginning of list_t
 * @head: pointer to head of list
 * @str: string to be added to list_t
 *
 * Return: NULL(fail) | address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	char *str_clone;
	int len;
	list_t *link;

	link = malloc(sizeof(list_t));
	if (link == NULL)
		return (NULL);

	str_clone = strdup(str);
	if (str_clone == NULL)
	{
		free(link);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	link->str = str_clone;
	link->len = len;
	link->next = *head;

	*head = link;

	return (link);
}
