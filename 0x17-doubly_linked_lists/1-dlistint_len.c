#include "lists.h"

/**
 * dlistint_len - counts all elements in a linked dlistint_t list.
 * @h: head of dlistint_t list
 *
 * Return: number of elements in dlistint_t list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t x = 0;

	if (h == NULL)
		return (x);

	while (h)
	{
		x++;
		h = h->next;
	}

	return (x);
}
