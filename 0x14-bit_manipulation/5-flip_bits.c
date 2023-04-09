#include "main.h"

/**
 * flip_bits - gets number of bits needed to flip n to m
 * @n: actual number
 * @m: number to flip n to
 *
 * Return: number of bits needed to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	unsigned long int bits;

	bits = 0;

	diff = n ^ m;

	for ( ; diff > 0; diff >>= 1)
	{
		bits += (diff & 1);
	}
	return (bits);
}
