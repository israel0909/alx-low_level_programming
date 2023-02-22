#include "main.h"
#include <stdio.h>

/**
 * main- out first 50 fibbo num
 * Return: 0
*/

int main(void)
{

	int a = 0;
	long b = 1,
	k = 2,
	c = k;

	while (k + b < 4000000)
	{
		k += b;
		if (k % 2 == 0)
		c += k;
		b = k - b;
		++a;
	}
	printf("%ld\n", c);
	return (0);
}
