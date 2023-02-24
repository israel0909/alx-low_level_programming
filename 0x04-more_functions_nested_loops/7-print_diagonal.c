#include "main.h"

/**
 * print_diagonal- diagonally prints backslash to the screen
 * @n: input
 * Return: nil
*/

void print_diagonal(int n)
{
	int o;
	int p;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (o = 0; o < n; o++)
		{
			for (p = 0; p < o; p++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}

