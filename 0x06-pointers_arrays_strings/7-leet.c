#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @a:  to l33t
 *
 * Return: 0
 */

char *leet(char *a)
{
	int str;
	int code;
	char letter[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char num[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (str = 0; a[str] != '\0'; str++)
	{
		for (code = 0; code < 10; code++)
		{
			if (a[str] == letter[code])
			{
				a[str] = num[code];
			}
		}
	}
	return (a);
}
