#include "main.h"
#include <stdio.h>

/**
 * _strncat - concats 2 string depending on byte input
 * @dest: string to be concatenated
 * @src: sourse of concatination
 * @n: byte value that concat depends on
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	/*2 var, 1 4 d loop of dest, 2 4 d loop of src*/
	int a;
	int b;
	/*lop tru dest 2 store its len in d var, whil !='0'*/
	for (a = 0; dest[a] != '\0'; a++)
	{}
	/*lop tru src, whil !='0', setng d char  2 @n*/
	for (b = 0; b < n && src[b] != '\0'; b++)
	{
		/*addn char of src to dest*/
		dest[a + b] = src[b];
	}
	/*return dest*/
	return (dest);
}
