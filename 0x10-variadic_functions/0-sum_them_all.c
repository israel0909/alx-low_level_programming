#include "variadic_functions.h"

/**
 * sum_them_all - add all integers
 * @n: number of arguments
 * Return: sumation of argument values
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int x, sum = 0;

	if (n == 0)
		return (0);

	va_list list;

	va_start(list, n);

	for (x = 0 ;  x < n; x++)
		sum += va_arg(list, int);

	va_end(list);

	return (sum);
}
