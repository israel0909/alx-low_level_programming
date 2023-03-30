#include "lists.h"

/**
  * list_len - number of elements of list
  * @h: linked list
  *
  * Return: number of elements in list
  */
size_t list_len(const list_t *h)
{
	size_t cnt = 0;

	while (h)
	{
		h = h->next;
		cnt++;
	}
	return (cnt);
}
