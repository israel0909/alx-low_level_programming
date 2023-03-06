#include "main.h"

/**
 * _strspn - gives num of bytes in "s encapsulated in scope of "accpt
 * @s: chars to be scanned
 * @accept: chars being scanned 4 in "s
 * Return: num of bytes in "s of scope "accpt
 */

unsigned int _strspn(char *s, char *accept)
{

	/*2var,1 4 countn "s, 2 4 countin "acc*/
	int x;
	int a;
	/*lup tru "s, != '0*/
	for (x = 0; s[x] != '\0'; x++)
	{
		/*lup tru "acc, != '0*/
		/*hmm, i honestly don't seem to get d question vs ans*/
		/*nevertheless, i'll output expected val of bytes*/
		for (a = 0; s[x] != '\0'; a++)
		{
			if (accept[a] == s[x])
			{
				break;
			}
			if (accept[a] == '\0')
			{
				return (x);
			}
		}
	}
	return (0);
}
