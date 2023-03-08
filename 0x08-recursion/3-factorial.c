#include "main.h"

/**
 * factorial - returns factorial of numbers
 * @n: input
 * Return: factorial
 */

int factorial(int n)
{
	/*error statement; n < 0*/
	if (n < 0)
	{
		return (-1);
	}
	/* exit statement; n == 0*/
	if (n == 0)
	{
		return (1);
	}
	/* if != exit*/
	if (n >= 0)
	{
		/*recuse - 1*/
		return (n * factorial(n - 1));
	}
}
