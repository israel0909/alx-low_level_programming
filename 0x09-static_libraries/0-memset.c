#include "main.h"

/**
 * _memset - swaps d bytes of "*s 4 "b
 * @s: bytes to be swapped
 * @b: bytes used to swap
 * @n: determines number of bytes to swap
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	/*var 4 count*/
	unsigned int x = 0;
	/*lup tru "s, while < "n*/
	for ( ; x < n; x++)
	{
		/*swap "s 4 "b*/
		s[x] = b;
	}
	/*return "s*/
	return (s);
}
