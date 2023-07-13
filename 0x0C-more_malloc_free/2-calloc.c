#include <stdlib.h>
#include "main.h"

/**
 * _memset - funct to fill mem with a constant byte
 * @s: mem area 
 * @b: char 2 cp
 * @n: no x to copy b
 *
 * Return: pointer to the memory area s
 **/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)

	{
		s[i] = b;
	}
	return (s);
}

/**
 *_calloc - allocate array mem
 * @nmemb: no of elements in array
 * @size: size @ element
 *
 * Return: pointer to allocated memory
 **/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0) /* if no specified  */
	return (NULL); /* return NULL */

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, nmemb * size);
	return (ptr);
} /* THE END OF FUNCTION  */
