#include "main.h"

/**
* get_bit -  value of bit at index
* @n: integer
* @index: index
* Return: -1 (err) | value of bit at index
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int x;

	x = n >> index;

	if (sizeof(n) * 8 < index)
		return (-1);
	return (x & 1);
}
