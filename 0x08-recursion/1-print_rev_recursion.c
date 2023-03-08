#include "main.h"

/**
 * _print_rev_recursion - recurse in reverse
 * @s: string to rev
 * Return: "s
 */

void _print_rev_recursion(char *s)
{
	/*exit statement; == '0*/
	if (*s == '\0')
	{
		return;
	}
	/*if != exit*/
	if (*s != '\0')
	{
		/*recurse in arry form*/
		_print_rev_recursion(s + 1);
		/*output*/
		_putchar(*s);
	}
}
