#include <stdio.h>

/**
 * main- using inbuilt char letter rather than declaring
 * Return: 0
*/

int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		if (letters == 'e' && letters == 'q')
		{
			break;
		}
		else
		{
			putchar(letters);
		}
	}
	putchar('\n');
	return (0);
}
