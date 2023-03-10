#include "main.h"
#include <stdlib.h>

/**
 * main - main function
 * @argc: argc
 * @argv: argv
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a;
	int y;
	int sum;

	for (a = 1; a < argc; a++)
	{
		for (y = 0; argv[a][y]; y++)
		{
			if (argv[a][y] < '0' || argv[a][y] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[a]);
	}
	printf("%d\n", sum);
	return (0);
}
