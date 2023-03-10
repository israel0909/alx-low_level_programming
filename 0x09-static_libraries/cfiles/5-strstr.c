#include "main.h"
#include <stddef.h>

/**
 *  _strstr - finds 1st occurrence of "needle in "haystack
 * @haystack: string being searched
 * @needle: var substring
 * Return: pointer, or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int a;
	int b;

	for (a = 0; haystack[a] != '\0'; a++)
	{
		for (b = 0; needle[b] != '\0'; b++)
		{
			if (haystack[a + b] != needle[b])
			{
				break;
			}
		}
		if (!needle[b])
		{
			return (&haystack[a]);
		}

	}
	return (NULL);
}
