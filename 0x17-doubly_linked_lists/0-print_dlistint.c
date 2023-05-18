#include "lists.h"

/**
 * print_dlistint - prints all data in a list
 * @h: list's head pointer
 *
 * Return: 1(success), -1 (err0r)
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	if (h == NULL)
		return (nodes);

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		nodes++;
	}

	return (nodes);
}
