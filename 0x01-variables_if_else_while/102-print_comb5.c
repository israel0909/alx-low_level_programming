#include <stdio.h>


/**
 * main- going to be using greater than and less thans
 * Return: 0
*/

int main(void)
{
	int first;
	int fst1;
	int fst2;

	int second;
	int snd1;
	int snd2;

	while (first < 98)
	{
		fst1 = (first / 10 + '0');
		fst2 = (first % 10 + '0');

		second = 0;
		while (second < 99)
		{
			snd1 = (second / 10 + '0');
			snd2 = (second % 10 + '0');
			if (first < second)
			{
				putchar(fst1);
				putchar(fst2);
				putchar(' ');
				putchar(snd1);
				putchar(snd2);

				if (first != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			second++;
		}
		first++;
	}
	putchar('\n');
	return (0);
}
