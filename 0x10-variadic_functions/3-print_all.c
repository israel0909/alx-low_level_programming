#include "variadic_functions.h"

void print_chr(va_list arg);
void print_int(va_list arg);
void print_flt(va_list arg);
void print_str(va_list arg);

/**
 * print_all - prints anything
 * @format: string of characters by argument type
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int x = 0, y = 0;
	char *separator = "";
	printer_t funcs[] = {
		{"c", print_chr},
		{"i", print_int},
		{"f", print_flt},
		{"s", print_str}
	};

	va_start(args, format);

	while (format && (*(format + x)))
	{
		y = 0;

		while (y < 4 && (*(format + x) != *(funcs[y].symbol)))
			y++;

		if (y < 4)
		{
			printf("%s", separator);
			funcs[y].print(args);
			separator = ", ";
		}
		x++;
	}
	printf("\n");

	va_end(args);
}

/**
 * print_chr - prints a char
 * @arg: list of arguments as char
 */
void print_chr(va_list arg)
{
	char letter;

	letter = va_arg(arg, int);
	printf("%c", letter);
}

/**
 * print_int - prints int
 * @arg: list of arguments as int
 */
void print_int(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	printf("%d", num);
}

/**
 * print_flt - prints float
 * @arg: list of arguments as float
 */
void print_flt(va_list arg)
{
	float num;

	num = va_arg(arg, double);
	printf("%f", num);
}

/**
 * print_str - prints a string
 * @arg: list of arguments as string
 */
void print_str(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
