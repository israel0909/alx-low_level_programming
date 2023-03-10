#include "main.h"
#include <stdlib.h>

/**
 * main - adds all positive int
 * @argc: counts arguments
 * @argv: outputs arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a;
	int b;
	int sum;

	if (argc == 1)
	{
		printf("0\n");
	}

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b]; b++)
		{
			if (argv[a][b] < '0' || argv[a][b] > '9')
			{
				printf("Error\n");
				return (1);
			}

		}
		sum += atoi(argv[a]);
	}
	printf("%d\n", sum);
	return (0);
}
