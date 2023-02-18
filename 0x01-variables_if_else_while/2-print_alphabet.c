#include <stdio.h>

/**
 *main- I'll declare a var (of type char; cause of single character values
 * then i'll assign letters to the var, and then putchar the var
 *Return: 0
 */

int main(void)
{
	char letters[26] = "abcdefghijklmnopqrstuvwxyz";
	int input;

	for (input = 0; input <= 26; input++)
	{
		putchar(letters[input]);
	}
	/* I'm insert "/n" here and not above*/
	/*; cause the task asks to use "putchar" twice*/
	putchar('\n');
	return (0);
}
