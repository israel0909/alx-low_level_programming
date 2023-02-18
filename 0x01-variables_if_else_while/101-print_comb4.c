#include <stdio.h>

/**
 * main- going to be using greater than and less thans
 * Return: 0
*/

int main(void)
{
	int first;
	int second;
	int third = 0;

	while (third < 10)
	{
		second = 0;
		while (second < 10)
		{
			first = 0;
			while (first < 10)
			{
				if (first != second && second != third && third < second && second < first)
				{
					putchar('0' + third);
					putchar('0' + second);
					putchar('0' + first);

					if (first + second + third != 9 + 8 + 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
				first++;
			}
			second++;
		}
		third++;
	}
	putchar('\n');
	return (0);
}
