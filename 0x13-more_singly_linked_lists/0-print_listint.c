#include "lists.h"

/**
 * print_listint - it prints all elements of list_int list
 * @h: pointer of struct
 * Return: elements
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *node = h;
	unsigned int cnt = 0;

	for (; node; node = node->next)
	{
		cnt++;
		printf("%d\n", node->n);
	}

	return (cnt);
}
