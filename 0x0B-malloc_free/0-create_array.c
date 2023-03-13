#include "main.h"

/**
 * create_array - a function that creates an array of chars
 * @size: size of data type
 * @c: char to initialize
 * Return: NULL (0 or fail)/ pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int x;

	if (size == 0)
	{
		return (NULL);
	}

	a = malloc(sizeof(char) * size);

	if (a == NULL)
	return (NULL);

	for (x = 0; x < size; x++)
	{
		a[x] = c;
	}
	return (a);
}
