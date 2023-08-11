#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer file name.
 * @text_content: The string to add to the end of the file.
 *
 * Return: -1 If the func fails or filename is NULL
 *         -1 If the no file && user lacks +w
 **/
int append_text_to_file(const char *filename, char *text_content)
{
	int fds, wr, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fds = open(filename, O_WRONLY | O_APPEND);
	wr = write(fds, text_content, len);

	if (fds == -1 || wr == -1)
		return (-1);

	close(fds);

	return (1);
}
