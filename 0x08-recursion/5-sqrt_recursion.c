#include "main.h"

int find_sqrt(int num, int root);

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
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_sqrt(n, root));
}
/**
 * find_sqrt - Finds the natural square root of an inputted number.
 * @num: The number to find the square root of.
 * @root: The root to be tested.
 *
 * Return: If the number has a natural square root - the square root.
 *         If the number does not have a natural square root - -1.
 */

int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}

