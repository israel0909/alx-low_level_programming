#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory 
 *	containing a copy of the string given as a parameter
 * @str: string to be duplicated
 * Return: NULL (malloc null) / pointer to string's copy
 */

char *_strdup(char *str)
{
	char *s;
	int x;
	int b = strlen(str);

	if (str == NULL)
	return (NULL);

	s = malloc(sizeof(char) * b);
	
	if (s == NULL)
	return (NULL);

	for (x = 0; x < b; x++)
	{
		s[x] = str[x];
	}

	s[b] = '\0';
	return (s);
}
