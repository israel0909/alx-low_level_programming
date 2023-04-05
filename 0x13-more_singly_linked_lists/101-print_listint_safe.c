#include "lists.h"

/**
 * print_listint_safe - prints a safe linked listint with a loop.
 * @head: pointer to head
 *
 * Return: different nodes in d list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t cout;
	size_t n_node;
	const listint_t *l_node, *tmp_new_node = NULL;

	cout = 0;

	tmp_new_node = head;

	do {
		printf("[%p] %d\n", (void *)tmp_new_node, tmp_new_node->n);
		cout++;

		tmp_new_node = tmp_new_node->next;

		l_node = head;

		n_node = 0;

		if (head == NULL)
		{
			exit(98);
		}

		for ( ; cout > n_node; n_node++)
		{
			if (tmp_new_node == l_node)
			{
				printf("-> [%p] %d\n", (void *)tmp_new_node, tmp_new_node->n);
				return (cout);
			}

			l_node = l_node->next;
		}

	} while (tmp_new_node != NULL);

	return (cout);
}
