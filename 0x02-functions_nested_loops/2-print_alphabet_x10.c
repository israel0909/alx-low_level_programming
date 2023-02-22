#include "main.h"

/**
 * print_alphabet_x10- Entry
 * Return: 0
 * output- letters of the alphabet using char
*/

void print_alphabet_x10(void)
{
	char x;

	int a;

	for (a = 0; a <= 9; a++)
	{
		for (x = 97; x <= 122; x++)
		{
			_putchar(x);
		}
	}
	_putchar('\n');
}

