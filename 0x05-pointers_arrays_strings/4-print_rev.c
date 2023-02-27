#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev - check the code
 * @s: var
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	for (x = x - 1; x >= 0; x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
