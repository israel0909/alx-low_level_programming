#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isupper - checks if an input is in upper case and returns 1, else 0
 * @c: input
 * Return: 0
*/

int _isupper(int c)
{

	int d;

	d = isupper(c);

	if (d != 0)
	{
		return (1);
	}
	else
	{
		return (d);
	}
}
