#include "main.h"

/**
 * print_times_table- outinf a multiplication table by input
 * Return: multiplication table
 * @n: input
 * @c: column
 * @r: row
 * @k: product;r * c
 */

void print_times_table(int n)
{
	int c, r, p;

	if (n >= 0 && n <= 15)
	{
		for (c = 0; c <= n; c++)
		{
			_putchar('0');

			for (r = 1; r  <= n; r++)
			{
				_putchar(',');
				_putchar(' ');

				p = c * r;

				if (p <= 99)
					_putchar(' ');
				if (p <= 9)
					_putchar(' ');

				if (p >= 100)
				{
					_putchar((p / 100) + '0');
					_putchar(((p / 10)) % 10 + '0');
				}
				else if (p <= 99 && p >= 10)
				{
					_putchar((p / 10) + '0');
				}
				_putchar((p % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
