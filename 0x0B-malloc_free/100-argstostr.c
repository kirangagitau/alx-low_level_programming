#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - convert argument to a string
 * @ac: argument counter.
 * @av: argument characters.
 *
 * Return: the concatinated string.
 **/

char *argstostr(int ac, char **av)
{
	char *cons;
	int i, j, r, p;

	r = 0;
	p = 0;
	if (ac == 0 || av == NULL) /* check for the null conditions */
		return (NULL);
	for (i = 0;  < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			p++;
	}
	p += ac; /* count NO. of args */
	cons = malloc(sizeof(char) * p + 1); /* allocate enought mem */
	if (cons == NULL)
		return (NULL); /* if no argv given  */

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			cons[r] = av[i][j];
			r++;
		}
		if (cons[r] == '\0')
		{
			con[r++] = '\n'
		}
	}
	return (cons); /* on success*/
}
