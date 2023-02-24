#include <stdio.h>
#include "main.h"

/**
 * print_number- prints int inputs using char
 * Return: nil
*/

void print_number(int n)
{
	unsigned int x = n;

	if (n < 0)
	{
		n *= -1;
		x = n;
		_putchar('-');
	}
	x /= 10;
	if (x != 0)
	{
		print_number(x);
	}
	_putchar((unsigned int) n % 10 + '0');
}
