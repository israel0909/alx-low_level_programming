#include "lists.h"

/**
 * listint_len - gives number of nodes/element in linked list
 * @h: pointer to head of linked list
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t cnt;
	cnt = 0;

	for (cnt = 0; h != NULL; cnt++)
		h = h->next;

	return (cnt);
}
