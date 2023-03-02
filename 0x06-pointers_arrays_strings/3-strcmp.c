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
	/*2var, 1 4 loop count, 2 4 diff in s1/s2*/
	int a;
	int b;
	/*lop tru d 2 strings, while both != 0*/
	for (a = 0; s1[a] != '\0' && s2[a] != '\0'; a++)
	{
		/*if there is difference*/
		if (s1[a] != s2[a])
		{
			return (s1[a] - s2[a]);
		}
	}
	/*return var2*/
	return (0);
}
