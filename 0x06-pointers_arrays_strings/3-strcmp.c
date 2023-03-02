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
	int c;
	/*lop tru s1, whil != '\0'*/
	for (a = 0; s1[a] != '\0' && s2[a] != '\0'; a++)
	{
		/*check if chars of s1 & s2 are diff*/
		if (s1[a] != s2[a])
		{
		/*return d diff in ascii*/
			c = s1[a] - s2[a];
		}
		else if (s1[a] == s2[a])
		{
			c = 0;
		}
		break;
	}
	/*return var3*/
	return (c);
}
