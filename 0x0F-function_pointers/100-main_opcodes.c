#include "function_pointers.h"

/**
 * main - opcodes
 * @argc: argument count
 * @argv: arguments contents
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int x;
	int y;
	int (*fp)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	x = atoi(argv[1]);

	if (x < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (y = 0; y < x; y++)
	{
		opcode = *(unsigned char *)fp;
		printf("%.2x", opcode);

		if (y == x - 1)
			continue;
		printf(" ");

		fp++;
	}

	printf("\n");

	return (0);
}
