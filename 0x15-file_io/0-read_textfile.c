#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 *
 * Return: w- actual number of bytes read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t filedes;
	ssize_t wr;
	ssize_t src;

	filedes = open(filename, O_RDONLY);
	if (filedes == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	src = read(fileddes, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, src);
	/* FREE THE MEMORY AFTER  USE TO RETURN TO HEAP */
	free(buffer);
	close(filedes);
	return (wr);
}
