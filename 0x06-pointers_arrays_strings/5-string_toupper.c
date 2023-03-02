#include "main.h"

/**
 * string_toupper - returns lower to uppercase
 * @a: var
 * Return: 0
 */

char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0';)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = a[i] - 32;
		}
		i++;
	}
	return (a);
}
