#include "main.h"

/**
 * main - all arguments, ending them with new lines
 * @argc: counts arguments
 * @argv: outputs arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
