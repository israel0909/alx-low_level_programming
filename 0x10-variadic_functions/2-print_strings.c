#include "variadic_functions.h"

/**
 * print_strings - prints arguments
 * @n: number of arguments
 * @separator: string
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list list;
	char *s;

	va_start(list, n);

	for (x = 0 ; n > x; x++)
	{
		s = va_arg(list, char *);

		if (s != NULL)
			printf("%s", s);
		else
			printf("(nil)");

		if (separator != NULL && x != (n - 1))
			printf("%s",  separator);
	}

	printf("\n");

	va_end(list);
}
