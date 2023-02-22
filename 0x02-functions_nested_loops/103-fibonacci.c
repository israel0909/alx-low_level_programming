#include "main.h"
#include <stdio.h>

/**
 * main- fibbo less than 4000000
 * Return: 0
*/

int main(void)
{
	long a = 1;
	long b = 2;
	int c = 0;

	for ( ; c <= 4000000; c++)
	{
		if (c == 0)
		{
			printf("%ld, ", a);
		}
		else if (c == 1)
		{
			printf("%ld, ", b);
		}
		else if ((c < 3999999) && (c % 2 == 0))
		{

			b += a;
			a = b - a;
			printf("%ld, ", b);
		}
		if ((c == 4000000) && (c % 2 == 0))
		{
			b += a;
			a = b - a;

			printf("%ld", b);
		}
	}
	printf("\n");
	return (0);

}
