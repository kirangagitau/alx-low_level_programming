#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *the_buffer(char *file);
void close_the_file(int fd);

/**
 * the_buffer - Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *the_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_the_file - Closes file descriptors.
 * @fd: The file descriptor
 */
void close_the_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: count of arguments to main
* @argv: An array vector of the arguments.
 *
 * Return: Always 0 on success.
 **/

int main(int argc, char *argv[])
{
	int src, dest, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = the_buffer(argv[2]);
	src = open(argv[1], O_RDONLY);
	r = read(src, buffer, 1024);
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (src == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(dest, buffer, r);
		if (dest == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(src, buffer, 1024);
		dest = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);
	/* retunr memory to heap after use */
	free(buffer);
	close_the_file(src);
	close_the_file(dest);

	return (0);
}
