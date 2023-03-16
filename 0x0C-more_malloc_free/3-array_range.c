#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: 1st element in array
 * @max: last element in array
 * Return: NULL (fail) / pointer to array (success)
 */

int *array_range(int min, int max)
{
	int *x;
	int c, b;	

	if (min > max)
		return (NULL);
	
	b = max - min + 1;

	x = malloc(sizeof(int) * b);

	if (x == NULL)
		return (NULL);

	for (c = 0; c < b; c++)
		x[c] = min++;
	
	return (x);
}
