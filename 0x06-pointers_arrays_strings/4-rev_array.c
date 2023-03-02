#include "main.h"

/**
 * reverse_array - reversing an array
 * @a: items of the array
 * @n: number of elements of the array
 * Return: reversal
 */

void reverse_array(int *a, int n)
{
	/*2 vars, 1 4 count, 2 4 temporal storage*/
	int x;
	int y;
	/*lop tru var 1 , while setting element from d last*/
	for (x = n - 1; x >= n / 2; x--)
	{
		y = a[x];
		a[x] = a[n - 1 - x];
		a[n - 1 - x] = y;
	}
}
