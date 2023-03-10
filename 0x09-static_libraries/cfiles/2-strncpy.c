#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copying a 2 anoda string depending on byte input
 * @dest: string to be copied into
 * @src: string to be copied
 * @n: byte value that copy depends on
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	/*var for count*/
	int a;
	/*lop tru src, whil != '\0' % < var*/
	for (a = 0; src[a] != '\0' && a < n; a++)
	{
		/*change dest chars 2 src chars*/
		dest[a] = src[a];
	}
	for ( ; a < n; a++)
	{
		dest[a] = '\0';
	}
	/*return dest*/
	return (dest);
}
