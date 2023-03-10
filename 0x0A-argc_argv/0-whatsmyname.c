#include "main.h"

/**
 * main - to return name of file
 * @argc: argument to count argument
 * @argv: output content of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
