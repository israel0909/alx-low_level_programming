#include "main.h"

/**
 * _isalpha- Entry
 * @c: input
 * Return: 1 if true, 0 otherwise
 * output- gives 1 if out is true, 0 otherwise
*/

int _isalpha(int c)
{

	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}
