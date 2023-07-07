#include <stdio.h>
#include <stdlib.h>

int errmsg(void);

/**
 * main - start point of program
 * @argc: counting the arguments
 * @argv: vector array of provided arguments.
 *
 * Return: exit status of environment.
 **/

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
	int a, b, ans;

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	ans = a * b;
	printf("%d\n", ans);
	}
	else
		errmsg();
	return (EXIT_SUCCESS);
}

/**
 * errmsg - function if the two arguments no there
 *
 * Return: 1
 **/

int errmsg(void)
{
	printf("error");
	return (1);
}
