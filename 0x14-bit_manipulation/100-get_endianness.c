#include "main.h"

/**
 * get_endianness - checks for endianness
 *
 * Return:  0 | - 1
 */
int get_endianness(void)
{
	int x = 1;
	char *endianess = (char *)&x;

	if (*endianess == 1)
		return (1);

	return (0);
}

