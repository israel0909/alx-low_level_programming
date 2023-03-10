#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - locates 1st occurrence of "acc in "s
 * @s: source being scanned
 * @accept: var to be scanned
 *
 * Return: Nil
 */

char *_strpbrk(char *s, char *accept)
{
	int b;
	int st;

	/*lup tru "s*/
	for (b = 0; *s != '\0'; b++)
	{
		for (st = 0; accept[st] != '\0'; st++)
		{
			if (*s == accept[st])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
