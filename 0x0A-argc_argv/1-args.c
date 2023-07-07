#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point to program
 * @argc: counting the argmets given
 * @argv: vector array for thw given argumets.
 *
 * Return: exit statu of hosted environment. always succes.
 **/

int main(int argc, char **argv __attribute__((unused)))
{
	if (argc > 0)
	printf("%d\n", argc - 1);
	return (EXIT_SUCCESS);
}
