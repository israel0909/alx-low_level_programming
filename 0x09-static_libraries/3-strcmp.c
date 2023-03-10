#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares 2 strings and return d difference
 * @s1: 1st string of comparison
 * @s2: 2nd sting of comp
 * Return: difference
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	/* loop through both strings while s1 & s2 are not null */
	for (i = 0; s1[i] != 0 && s2[i] != 0; i++)
	{
		/* find where characters don't match in strings */
		if ((s1[i] - s2[i]) != 0)
			break;
	}

	/* return difference between those characters */
	return (s1[i] - s2[i]);
}
