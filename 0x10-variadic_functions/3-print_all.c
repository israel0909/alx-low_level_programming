#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: printables by argument type
 */
void print_all(const char * const format, ...)
{
	int x = 0;
	char *str, *seperator = "";
	va_list list;

	va_start(list, format);
	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%s%c", seperator, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", seperator, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", seperator, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", seperator, str);
					break;
				default:
					x++;
					continue;
			}
			seperator = ", ";
			x++;
		}
	}
	printf("\n");
	va_end(list);
}
