#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int checker(char *str);

/**
 * main - entry point of program
 * @argc: argument counts
 * @argv: argument vector
 *
 * Return: exit statu of system.
 **/

int main(int argc, char *argv[])
{
	if (argc < 2) /*condition when no arguments are given*/
	{
		printf("0");
	}
	else
	{
		int abs, ans, counts;

		ans = 0;
		counts = 1;
		while (counts < argc) /* traversing all the elements of the argv[] array*/
		{
			if (checker(argv[counts]))
			{
				abs = atoi(argv[counts]);
				ans += abs;
			}
			else
			{
				printf("Error");
				return (1);
			}
			counts++;
		}
		printf("%d", ans);
	}
	return (EXIT_SUCCESS);
}

/**
 * checker - function to check for symbols in array
 * @str: array passed to function by argv as functions argument.
 *
 * Return: 1 for no symbol 0 for symbol.
 **/

int checker(char *str) /* Checking for symbols in *argv[] */
{
	unsigned int counts;

	counts = 0;
	while (counts < strlen(str))
	{
		if (!isdigit(str[counts]))
		{
			return (0);
		}
		counts++;
	}
	return (1);
}
