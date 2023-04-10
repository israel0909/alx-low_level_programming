#include "main.h"

void end_file(int fd);
char *make_buffer(char *file);

/**
 * main - copies contents of one file to another
 * @argc: number of arguments
 * @argv: array to arguments pointers
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = make_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(to, buffer, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffer);
	end_file(from);
	end_file(to);

	return (0);
}

/**
 * end_file - closes file descriptors
 * @fil_dir: file descriptor to be closed
 */
void end_file(int fil_dir)
{
	int c = close(fil_dir);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: closeing fil_dir %d\n", fil_dir);
		exit(100);
	}
}

/**
 * make_buffer - Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *make_buffer(char *file)
{
	char *buff = malloc(sizeof(char) * 1024);

	if (!buff)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buff);
}
