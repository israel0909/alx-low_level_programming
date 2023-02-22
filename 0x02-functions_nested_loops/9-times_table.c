#include "main.h":

/**
 * times_table - output 9 times table, starting with 0
*/

void times_table(void)
{

	int r, c, k;

	for (r = 0; r < 10; r++)
	{
		for (c = 0; c < 10; c++)

		{
			k = c * r;
			if (c == 0)
			{
				_putchar(k + '0');
			}

			else if (k < 10 && c != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			}
			else if (k >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
		}
		_putchar('\n');

	}
}
