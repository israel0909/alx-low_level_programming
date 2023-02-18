#include <stdio.h>

/**
 * main- going to be using greater than and less thans
 * Return: 0
*/

int main(void)
{
	int first = 0;
	int second = 0;

	while (first < 10)
	{
		second = 0;
		while (second < 10)
		{
			if (first != second && first > second)
			{
				putchar((first % 10) + '0');
				putchar((second % 10) + '0');
				putchar(',');
				putchar(' ');
			}
			second++;
		}
		first++;
	}
	putchar('\n');
	return (0);
}
