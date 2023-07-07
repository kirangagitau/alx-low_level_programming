#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point to program
 * @argc: count of arguments
 * @argv: vector array of argumets.
 *
 * Return: Exit status in the hosted environment
 *
 **/

int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", argv[0]);
	return (EXIT_SUCCESS);
}
