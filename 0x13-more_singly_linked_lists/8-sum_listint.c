#include "lists.h"

/**
 * sum_listint - calculates sum of list's data
 * @head: pointer to head
 * Return: 0 | sum
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
