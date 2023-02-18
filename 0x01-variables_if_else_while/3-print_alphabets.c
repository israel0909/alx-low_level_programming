#include <stdio>

/**
 *main- I'll declare a var (of type char; cause of single character values
 * then i'll assign letters to the var, and then putchar the var
 *Return: 0
 */

int main(void)
{
	char upper_case_letters[26] = "abcdefghijklmnopqrstuvwxyz";
	char lower_case_letters[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int upper_input;
	int lower_input;

	for (upper_input = 0; upper_input < 26;)
	{
		putchar(upper_case_letters[upper_input]);
		upper_input++;
	}
	for (lower_input = 0; lower_input < 26;)
	{
		putchar(lower_case_letters[lower_input]);
		lower_input++;
	}

	/* I'm insert "/n" here and not above*/
	/*; cause the task asks to use "putchar" twice*/
	putchar('\n');
	return (0);
}
