#include "main.h"

/**
 * _concat - concatinates two string together
 * @s1: 1st string
 * @s2: 2nd string
 * Return: concat (success) / NULL (failure)
 */

char *str_concat(char *s1, char *s2)
{
	int la;
	int lb;
	
	int len = 0;
	int x;
	char *s;
	int slen = 0;

	/*if NULL is passed, treat it as an empty string*/
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	la = lb = 0;
	for (x = 0; s1[x]; x++)
		la++;

	for (x = 0; s2[x]; x++)
		lb++;

	len = la + lb + 1;

	/*malloc*/
	s = malloc(sizeof(char) * len);

	/*test malloc*/
	if (s == NULL)
		return (NULL);

	/*cat strings*/
	for (x = 0; s1[x]; x++)
		s[slen++] = s1[x];

	for (x = 0; s2[x]; x++)
		s[slen++] = s2[x];

	//s1[len] = '\0';
	s[len] = '\0';

	/*return cat*/
	return (s);
}
