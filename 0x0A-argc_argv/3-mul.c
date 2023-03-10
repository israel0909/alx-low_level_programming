#include "main.h"
#include <stdlib.h>

/**
 * main - oupputs number of arguments passed ino it
 * @argc: counts arguments
 * @argv: outputs arguments
 * Return: 0 (success), 1 (error)
 */

int main(int argc, char *argv[])
{
	int x;
	if (argc == 3)
	{
		x = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", x);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
