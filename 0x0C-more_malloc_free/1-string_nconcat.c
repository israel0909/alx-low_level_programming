#include "main.h"

/**
 * string_nconcat - concatenates 2 strings together based on no of chars
 * @s1: dest
 * @s2: src
 * @n: number of chars to be joined
 * Return: pointer to joined string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	/*var for pointer*/
	char *x;
	unsigned int cnt, l = n;

	/*if null in input, treat as empty*/
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	/*get len of s1*/
	for (cnt = 0; s1[cnt]; cnt++)
		l++;

	/*assign maloc*/
	x = malloc(sizeof(char) * (l + 1));

	/*malloc check*/
	if (x == NULL)
		return (NULL);
	l = 0;

	/*s2 < n, add to s1*/
	for (cnt = 0; s1[cnt]; cnt++)
		x[l++] = s1[cnt];

	for (cnt = 0; s2[cnt] && cnt < n; cnt++)
		x[l++] = s2[cnt];

	x[l] = '\0';

	/*return pointer*/
	return (x);
}
