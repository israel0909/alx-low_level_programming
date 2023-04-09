#include "main.h"

/**
* set_bit - sets the value at n to index
* @n: pointer to bit
* @index: index
* Return: -1 (err) | 1
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(*n) * 8))
		return (-1);

	*n |= 1 << index;
		return (1);
}
