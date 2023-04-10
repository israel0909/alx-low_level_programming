#include "main.h"

/**
 * create_file - creates a file
 * @filename: pointer to file name
 * @text_content: pointer to string to write to file
 *
 * Return: -1 (err) | 1
 */
int create_file(const char *filename, char *text_content)
{
	int opn;
	int writ;
	int len;

	if (!filename)
	{
		return (-1);
	}

	opn = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	writ = write(opn, text_content, len);

	if (writ == -1 || opn == -1)
	{
		return (-1);
	}

	close(opn);

	return (1);
}
