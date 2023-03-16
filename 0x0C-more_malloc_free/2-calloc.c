#include "main.h"

/**
 * _calloc - Allocates memory of array elements by  byte size
 * @nmemb:number of elements
 * @size: byte size
 * Return: 0 (fail) / pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;
	char *x;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	m = malloc(size * nmemb);

	if (m == NULL)
		return (NULL);

	x = m;

	for (index = 0; index < (size * nmemb); index++)
		x[index] = '\0';

	return (m);
}
