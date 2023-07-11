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

void main()
{
	create_array(8, 'h');
}

char *create_array(unsigned int size, char c)
{
	if (size >= 1) /* check for array size*/
	{
		unsigned int i; /* must much the iterator with argument type*/
		char *str; /* Declaring char pointer */

		str = malloc(sizeof(char) * size); /* allocate memory of specified size */
		if (str == NULL)
			return (NULL);

		for (i = 0; i < size; i++)
			str[i] = c;
	}
	else
	{
		return (NULL);
	}
	return (0);
}
