#include "main.h"
#include <stdio.h>


/**
 * _strcat - concatinates two strings together.
 * @*dest: destination of concatination
 * @*src : source of concat...
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	/*2 vars, 1 2 hold loop of dest, 2 2 hold loop of src*/
	int a;
	int b;
	/*loop thru dest 2 get d length, while !='\0'*/
	for (a = 0; dest[a] != '\0'; a++)
	{}
	/*loop tru src 2 get d len, while != \0*/
	for (b = 0; src[b] != '\0'; b++)
		/*add the chars of src into cat of dest&src*/
		dest[a + b] = src[b];
	/*return var*/
	return (dest);
}
