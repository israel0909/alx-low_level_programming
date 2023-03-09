#include "main.h"


int _sq(int n, int i);

/**
  * _sqrt_recursion - Returns the natural square root of a number
  * @n: input
  *
  * Return: the natural square root
  */
int _sqrt_recursion(int n)
{
	return (_sq(n, 1));
}

/**
  * _sq - Calculates natural square root
  * @n: number to calculate the square root
  * @i: iterator
  *
  * Return: the natural square root
  */
int _sq(int n, int i)
{
	int sq = i * i;

	if (sq > n)
		return (-1);

	if (sq == n)
		return (i);
	return (_sq(n, i + 1));
}
