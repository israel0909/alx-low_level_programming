include "main.h"


/**
 * rev_string - Reversing a string
 * @s: The string var
 * Return: void
 */

void rev_string(char *s)
{
	int c = 0;
	int i = 0;
	int x;

	for (c = 0; s[c] != '\0'; c++)
	{
		i++;
	}
	for (x = i - 1; x >= 0; x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
