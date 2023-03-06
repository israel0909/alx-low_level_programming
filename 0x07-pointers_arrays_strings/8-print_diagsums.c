#include "main.h"
#include <stdio.h>

/**
* print_diagsums - prints the sum of the two diagonals of a square matrix
* @a: pointer examined
* @size: array size
* Return: void
*/

void print_diagsums(int *a, int size)
{
	unsigned int x = 0;
	unsigned int y = 0;
	int sum;

	for (sum = 0; sum < size; sum++)
	{
		x = x + a[(size * sum) + sum];
		y = y + a[(size * (sum + 1)) - (sum + 1)];
	}
	printf("%d, %d\n", x, y);
}
