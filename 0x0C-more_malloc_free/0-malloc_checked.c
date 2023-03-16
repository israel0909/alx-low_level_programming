#include "main.h"

/**
 * malloc_checked - Returns a pointer to the allocated memory
 * @b: integer value to be malloced
 * Return: pointer (success)/ 98 (terminate)
 */

void *malloc_checked(unsigned int b)
{
	int *x;

	/*assign malloc*/
	x = malloc(b);

	/*malloc check*/
	if (x == NULL)
		exit (98);

	/*return pointer*/
	return (x);
}
