#include "main.h"

/**
 * _strlen_recursion -length of string input
 * @s: string input
 * Return: 1 if lengt of str OR 0 exit
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}

	return (len);
}
