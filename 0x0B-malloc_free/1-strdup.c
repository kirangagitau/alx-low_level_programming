#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function returning pointer
 * @str: pointer address
 *
 * Return: give pointer if present or NULL if absent.
 **/

char *_strdup(char *str)
{
	char *sti;
	int j, i = 0;

	j = 0;
	if (str == NULL)
		return (NULL);

	while (str[j] != '\0')
		i++;

	sti = malloc(sizeof(char) * (j + 1)); /* allocte mem + \0 */
	if (sti == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		sti[j] = str[i];
	return (sti);
}
