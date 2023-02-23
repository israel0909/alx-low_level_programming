#include "main.h"

/**
 * print_most_numbers- outputs 0-9 in char modulus 2
 * Return: 0
*/

void print_most_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		if (x % 2 == 0)
		{
			_putchar(x + '0');
		}
	}
	_putchar('\n');
}

