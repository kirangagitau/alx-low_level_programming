#include "main.h"

/**
 * binary_to_uint - convert to base 10, a given base 2
 * @b: valiabe to convert
 *
 * Return: equivalent base 2.
 **/

unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int x = 0; /* decimal number to return*/

	/* if the pointer b is null*/
	if (!b)
		return (0);

	for (j = 1; j <= b[j]; j++)
	{
		/* checking for other chars, use of ascii*/
		if (b[j] < '0' || b[j] > '1')
			return (0);
		x = 2 * x + (b[j] - '0');
	}
	return (x);
}
