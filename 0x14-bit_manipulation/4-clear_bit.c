#include "main.h"

/**
 * clear_bit - sets value of bit at index to 0
 * @n: pointer to bit
 * @index: index
 *
 * Return: -1 (err) | 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(n) * 8))
	{
		return (-1);
	}
	*n &= ~(1 << index);

	return (1);
}
