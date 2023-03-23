#include "variadic_functions.h"

/**
 * print_numbers - prints arguments
 * @n: number of arguments
 * @separator: string
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list list;

	va_start(list, n);

	for (x = 0 ; n > x; x++)
	{
		printf("%d", va_arg(list, int));

		if (separator != NULL && x != (n - 1))
			printf("%s",  separator);
	}

	printf("\n");

	va_end(list);
}
