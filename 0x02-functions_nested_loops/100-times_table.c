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
	int c, r, k;

	if (n >= 0 && n <= 14)
	{

		for (c = 0; c <= n; c++)
		{
			for (r = 0; r <= n; r++)
			{
				k = c * r;
				if (k > 99)
				{
					_putchar(',');
					_putchar(32);
					_putchar((k / 100) + '0');
					_putchar(((k / 10) % 10) + '0');
					_putchar((k % 10) + '0');
				}
				else if (k > 9)
				{
					_putchar(',');
					_putchar(32);
					_putchar(32);
					_putchar(((k / 10) % 10) + '0');
					_putchar((k % 10) + '0');
				}
				else if (r != 0)
				{
					_putchar(',');
					_putchar(32);
					_putchar(32);
					_putchar(32);
					_putchar(k + '0');
				}
			}
			_putchar('\n');
		}
	}
}
