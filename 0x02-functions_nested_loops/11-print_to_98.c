#include "main.h"
#include <stdio.h>

/**
 * print_to_98- prints all numbers to and fro 98
 * Return: hmmm, let me see
 * @n: input
*/

void print_to_98(int n)
{

	for (; n < 98; n++)
	{
		printf("%d, ", n);
	}

	for (; n > 98; n--)
	{
		printf("%d, ", n);
	}
	if (n == 98)
	{
		printf("%d", n);
	}
	printf("\n");
}
