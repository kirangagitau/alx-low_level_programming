#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function to create the desired array
 * @size: array size needed
 * @c: array name
 *
 * return: null if no array size defines
 *
 * Return: exit status.
 **/
char *create_array(unsigned int size, char c)
{
	unsigned int i; /* must much the iterator with argument type*/
	char *str;/* Declaring char pointer */

	str = malloc(sizeof(char) * size); /* allocate memory of specified size */
	if (size > 1 || str == NULL) /* if no size or array is given*/
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (0);
}
