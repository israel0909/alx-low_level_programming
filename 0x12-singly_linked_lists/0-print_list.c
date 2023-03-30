#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all elements of a linked list
 * @h: pointer to list_t list to be print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t cnt = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		cnt++;
	}
	return (cnt);
}
