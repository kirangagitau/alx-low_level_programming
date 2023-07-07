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
	printf("%d\n", argc);
	return (EXIT_SUCCESS);
}
