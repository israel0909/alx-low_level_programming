#include "main.h"

/**
 * _strlen_recursion -length of string input
 * @s: string input
 * Return: 1 if lengt of str OR 0 exit
 */

int _strlen_recursion(char *s)
{
	/*exit; == '0*/
	if (*s == '\0')
	{
		return (0);
	}
	/*if != exit*/
	if (*s != '\0')
	{
		/*return 1 + "s arry increment*/
		return (1 + _strlen_recursion(s + 1));
	}
}
