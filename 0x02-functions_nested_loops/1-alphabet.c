#include "main.h"

/**
 * print_alphabet- Entry
 * Return: 0
 * output- letters of the alphabet using char
*/

void print_alphabet(void)
{
	char x;

	for (x = 97; x <= 122; x++)
	{
		_putchar(x);
	}

	_putchar('\n');
}
