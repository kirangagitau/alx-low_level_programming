#include <stdio.h>
#include <stdlib.h>

/**
 * main - enrty to poin of program
 * @argc: Argument count
 * @argv: argument vector, pointer to array
 *
 * Return: exit status of the systm.
 **/

int main(int argc, char **argv)
{
	int i;

	if (argc >= 1)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}

	return (EXIT_SUCCESS);
}
