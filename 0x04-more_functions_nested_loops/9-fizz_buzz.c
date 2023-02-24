#include <stdio.h>

/**
 * main- fizzing and buzzing...music to my ears
 * Return:0
*/

int main(void)
{
	int x;

	for (x = 0; x <= 100; x++)
	{
		if (x % 3 == 0)
		{
			printf("Fizz\n");
		}
		else if (x % 5 == 0)
		{
			printf("Buzz\n");
		}
		if (x % 3 == 0 && x % 5 == 0)
		{
			printf("FizzBuzz\n");
		}
		else
		{
			printf("%d\n", x);
		}
	}
}
