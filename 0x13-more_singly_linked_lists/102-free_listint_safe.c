#include "lists.h"

/**
 * free_listint_safe - frees a list
 * @h: pointer to head of list
 *
 * Return: freed size
 */

size_t free_listint_safe(listint_t **h)
{
	size_t cout;

	listint_t *tmp, *s_node;

	s_node = *h;

	if (h == NULL)
	{
		return (0);
	}

	cout = 0;

	do {
		cout++;
		tmp = s_node;
		s_node = s_node->next;
		free(tmp);

		if (tmp < s_node)
		{
			break;
		}

	} while (s_node);

	*h = NULL;
	return (cout);
}
