#include "main.h"

/**
 * _abs- Absolute value of an int
 * @c: input
 * Return: absolute value
*/

int _abs(int c)
{

	if (c < 0)
	{

		int a;

		a = c * -1;
		return (a);
	}
	return (c);
}
