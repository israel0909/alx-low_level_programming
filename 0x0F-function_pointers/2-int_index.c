#include "function_pointers.h"

/**
 * int_index - Searches for int in array
 * @array: array
 * @size: array size
 * @cmp: function pointer
 * Return: -1 (err) / function pointer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]) != 0)
			return (x);
	}

	return (-1);
}
