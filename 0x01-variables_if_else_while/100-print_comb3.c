#include <stdio.h>

/**
 * main- going to be using greater than and less thans
 * Return: 0
*/

int main(void)
{
	int first = 0;
	int second = 0;

	while (second < 10)
	{
		first = 0;
		while (first < 10)
		{
			if (first != second && first > second)
			{
				putchar((second % 10) + '0');
				putchar((first % 10) + '0');
				putchar(',');
				putchar(' ');
			}
			first++;
		}
		second++;
	}
	putchar('\n');
	return (0);
}
