#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates "c in "s
 * @s: data of chars to be scanned
 * @c: char being scanned in "s 4 a match
 * Return: pointer to "s or Null (i think, let me write first)
 */

char *_strchr(char *s, char c)
{
	/*increment "s*/
	do {
		/*look for match of "c in "s*/
		if (*s == c)
		{
			/*return "s*/
			return (s);
		}
	} while (*s++);
	/*return NULL*/
}
