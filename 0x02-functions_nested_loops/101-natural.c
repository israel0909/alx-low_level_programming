#include "main.h"
#include <stdio.h>

/**
 * main- factors of 3 and 5
 * Return: 0 i think
*/

int main(void)
{
	int x = 0;
	int y = 0;

	while (x < 1024)
	{
		if ((x % 3 == 0) || (x % 5 == 0))
		{
			y = x + y;
		}
		x++;
	}
	printf("%d\n", y);
	return (0);
}
