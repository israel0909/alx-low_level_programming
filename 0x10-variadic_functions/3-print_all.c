#include "variadic_functions.h"
#include <stdlib.h>

/**
  * print_all - prints anything
  * @format: printables by argument type
  * Return: Nothing
  */
void print_all(const char * const format, ...)
{
	va_list args;
	f_dt form_types[] = {
		{ "c", print_chr },
		{ "i", print_int },
		{ "f", print_flt },
		{ "s", print_str }
	};
	unsigned int i = 0;
	unsigned int j = 0;
	char *separator = "";

	va_start(args, format);

	while (format != NULL && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *form_types[j].identifier)
			{
				form_types[j].f(separator, args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}

/**
  * print_chr - prints char
  * @separator: separator
  * @args: variadic arguments
  */
void print_chr(char *separator, va_list args)
{
	printf("%s%c", separator, va_arg(args, int));
}

/**
  * print_int - prints integer
  * @separator: separator
  * @args: variadic arguments
  */
void print_int(char *separator, va_list args)
{
	printf("%s%i", separator, va_arg(args, int));
}

/**
  * print_flt - prints float
  * @separator: separator
  * @args: variadic arguments
  */
void print_a_flt(char *separator, va_list args)
{
	printf("%s%f", separator, va_arg(args, double));
}

/**
  * print_str - prints string
  * @separator: separator
  * @args: variadic arguments
  */
void print_str(char *separator, va_list args)
{
	char *arg = va_arg(args, char *);

	if (arg == NULL)
	{
		printf("%s%s", separator, "(nil)");
		return;
	}
	printf("%s%s", separator, arg);
}
