#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: the text file to read
 * @letters: no of letters to be read
 * Return: w- actual number of bytes read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fds;
	ssize_t wr;
	ssize_t t;

	fds = open(filename, O_RDONLY);
	if (fds == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	t = read(fds, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, t);
	/* free buffer after use */
	free(buffer);
	close(fds);
	return (wr);
}
