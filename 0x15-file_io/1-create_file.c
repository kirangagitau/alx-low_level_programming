#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to file being created.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: always 1 || function fails reunr -1
 **/

int create_file(const char *filename, char *text_content)
{
	int fds, wr, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fds = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(fds, text_content, len);

	if (fd == -1 || w == -1)
		return (-1);

	close(fds);

	return (1);
}
