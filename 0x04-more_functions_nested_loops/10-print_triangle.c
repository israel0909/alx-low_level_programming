#include "main.h"

/**
 * print_triangle- prints square to the screen
 * @size: input
 * Return: 0
*/

void print_triangle(int size)
{
	int c;
	int r;
	int k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 0; c < size; c++)
		{
			for (r = size - c; r > 1; r--)
			{
				_putchar(' ');
			}
			for (k = 0; k <= c; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
