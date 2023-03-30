#include "lists.h"

/**
  * _strlen - gets length of a string
  * @s: string to be counted
  *
  * Return: length of string
  */
int _strlen(const char *s)
{
	int x = 0;

	while (*s)
	{
		s++;
		x++;
	}
	return (x);
}

/**
  * add_node_end - adds new node at the end of list
  * @head: original linked list
  * @str: string to add to node
  *
  * Return: NULL(failed), address of the new list
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_list, *temp;

	if (str != NULL)
	{
		new_list = malloc(sizeof(list_t));
		if (new_list == NULL)
			return (NULL);

		new_list->str = strdup(str);
		new_list->len = _strlen(str);
		new_list->next = NULL;

		if (*head == NULL)
		{
			*head  = new_list;
			return (*head);
		}
		else
		{
			temp = *head;
			while (temp->next)
				temp = temp->next;

			temp->next = new_list;
			return (temp);
		}
	}

	return (NULL);
}
