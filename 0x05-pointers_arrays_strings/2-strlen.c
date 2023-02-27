#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strlen- returns the length of a sting 
 * @s: var
 * Return: Always 0.
 */

size_t _strlen(const char *s)
{
	size_t x = 0;

	while (*s++)
	x++;
	return (x);

}
