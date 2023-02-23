#include "main.h"

/**
 * print_line- prints lines to the screen
 * @n: input
 * Return: 0
*/

void print_line(int n)
{
	int o;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (o = 0; o < n; o++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
