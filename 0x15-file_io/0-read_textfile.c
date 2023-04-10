#include "main.h"

/**
 * read_textfile - reads text file and prints to stdout
 * @filename: pointer to the file
 * @letters: number of letters to be read and printed
 *
 * Return: 0 (NULL) | number of bytes able to read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t opn;
	ssize_t red;
	ssize_t writ;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);

	if (!filename)
	{
		return (0);
	}

	if (!buffer)
	{
		return (0);
	}

	opn = open(filename, O_RDONLY);
	red = read(opn, buffer, letters);
	writ = write(STDOUT_FILENO, buffer, red);

	if (opn == -1 || red == -1 || writ == -1 || writ != red)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(opn);

	return (writ);
}
