#include "main.h"

/**
 * _islower- Entry
 * @c: input
 * Return: 1 if true, 0 otherwise
 * output- gives 1 if out is true, 0 otherwise
*/

int _islower(int c);
{
	int c;

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}

