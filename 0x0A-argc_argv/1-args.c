#include "main.h"

/**
 * main - oupputs number of arguments passed ino it
 * @argc: counts arguments
 * @argv: outputs arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
