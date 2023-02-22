#include "main.h"

/**
 * print_last_digit- prints last digit of an int
 * @c: input
 * Return: absolute value
*/

int print_last_digit(int c)
{

	int a;

	a = c % 10;
	if (a < 0)
	{
		a = a * -1;
	}
	_putchar(a * '0');
	return (c);
}

