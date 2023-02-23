#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isdigit - checks if an input is in upper case and returns 1, else 0
 * @c: input
 * Return: 0
*/

int _isdigit(int c)
{

	int d;

	d = isdigit(c);

	if (d != 0)
	{
		return (1);
	}
	else
	{
		return (d);
	}
}

