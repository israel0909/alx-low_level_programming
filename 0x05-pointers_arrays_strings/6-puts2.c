#include "main.h"

/**
 * puts2 - output every other string characters
 * @s: string var
 * Return: nil
 */

void puts2(char *s)

{

	int i;
	int j = 0;

	while (s[j] != '\0')
	{
		j++;
	}

	for (i = 0; i < j; i += 2)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

