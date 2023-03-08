#include "main.h"

/**
 * square_checker - iterativly checks for square
 * @n: input
 * @x: squared value
 * Return: checked square
 */

int square_checker(int x, int n)
{
	int y;

	y = x * x;

	if (y == n)
	{
		return (x);
	}
	else if (y < n)
	{

		return (_square_checker(x + 1, n));
	}
	else if (y > n)
	{
		return (-1);
	}
}

/**
 * _sqrt_recursion - returns the sqrt of n
 * @n: input
 * Return: sqrt n OR  -1 unsqrt-able
 */


int _sqrt_recursion(int n)
{
	int a;

	if (n == 0)
	{
		return (0);
	}
	a = _square_checker(1, n);
	return (a);
}

