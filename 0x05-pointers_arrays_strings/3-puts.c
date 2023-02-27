#include "main.h"

/**
 * _puts - prints a string output
 *
 * Return: nil
 */

void _puts(char *str)
{
	for ( ; *str != '\0'; *str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
