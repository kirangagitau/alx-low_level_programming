#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - entry point of the program
 * @argc: argument counting
 * @argv: argument vector array
 *
 * Return: Exit status of system.
 **/

int main(int argc, char *argv[])
{
	int money, ans, i;

	int coin[] = {25, 10, 5, 2, 1};

	ans = 0;

	if (argc != 2) /* test condition for argument not exactly one*/
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		money = atoi(argv[1]);/* parsing argv[1] to int money */
	}
	if (money < 0)
	{
		printf("0\n");
	}
	else
	{
		for (i = 0; i < 5 && money >= 0; i++)
		{
			while (money >= coin[i])
			{
				ans++;
				money -= coin[i];
			}
		}
	}
	printf("%d\n", ans);
	return (EXIT_SUCCESS);
}
