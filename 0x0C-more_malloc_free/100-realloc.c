#include "main.h"

/**
 * _realloc - Reallocates a memory block
 * @ptr: pointer
 * @old_size: bytes for  ptr
 * @new_size: bytes for the new memory block
 * Return: NULL (fail) / pointer to the reallocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *m;
	char *ptr_copy;
	char *x;
	unsigned int index;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		m = malloc(new_size);

		if (m == NULL)
			return (NULL);

		return (m);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr_copy = ptr;
	m = malloc(sizeof(*ptr_copy) * new_size);

	if (m == NULL)
	{
		free(ptr);
		return (NULL);
	}

	x = m;

	for (index = 0; index < old_size && index < new_size; index++)
		x[index] = *ptr_copy++;

	free(ptr);
	return (m);
}
