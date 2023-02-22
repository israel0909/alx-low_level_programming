#include "main.h"

/**
 * print_sign- Entry
 * @n: input
 * Return: 1 if positive, 0if zero, -1 if negative
 * output
*/

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar(43);
		return (1);
	}

	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}

	else
	{
		_putchar(48);
		return (0);
	}

}
