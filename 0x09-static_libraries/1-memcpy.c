#include "main.h"

/**
 * _memcpy - copies bytes of "src 2 "dest
 * @dest: destination of copy
 * @src: bytes 2 be copied
 * @n: num of bytes to be copied
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	/*var 4 count*/
	unsigned int x;
	/*lup tru "dest, while < "n*/
	for (x = 0; x < n; x++)
	{
		/*swap "dest with "src*/
		dest[x] = src[x];
	}
	/*return dest*/
	return (dest);
}
