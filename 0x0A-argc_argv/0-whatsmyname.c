#include "main.h"
#include <stdio.h>

/**
 * main - a program to output it's own name even when changed
 * @argc: argument to count argument
 * @argv: output content of arguments
 * Return: 0
 */

int main(int argc __attribute((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
