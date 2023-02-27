#include "main.h"


/**
 * rev_string - Reversingi a string
 * @s: str input
 * Return: string in reverse
 */

void rev_string(char *s)

{

	int len = 0, 
	i = 0;
	char tmp;

	while (s[i++])
	len++;

	for (i = len - 1; i >= len / 2; i--)
	{
	tmp = s[i];
	s[i] = s[len - i - 1];
	s[len - i - 1] = tmp;
	}
}
