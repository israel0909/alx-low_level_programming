#include "main.h"

/**
 * binary_to_uint - converts  binary to unsigned int
 * @b: pointer to a string input in binary format
 *
 * Return: 0 (if @b has non-bninary chars or is NUll | converted numbers
 */
unsigned int binary_to_uint(const char *b)
{
	int length = 0;
	unsigned int x = 0;

	if (b[length] == '\0')
		return (0);

	do {
		x <<= 1;
		x += b[length] - '0';
		length++;
	} while ((b[length] == '0') || (b[length] == '1'));
	return (x);
}
