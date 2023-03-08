#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: actual value
 * @y: power
 * Return: x pwr y OR 1 if 0 OR -1 if negative
 */

int _pow_recursion(int x, int y)
{
	/*error statmnt; if < 0*/
	if (y < 0)
	{
		return (-1);
	}
	/*rtrn state @ 1; if == 0*/
	if (y == 0)
	{
		return (1);
	}
	/*n! >= n*/
	if (y >= 0)
	{
		/*recuse 2pwr, by decrement*/
		return (x  * _pow_recursion(x, y - 1));
	}
}
