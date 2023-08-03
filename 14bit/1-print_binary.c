#include "main.h"

/**
 * print_binary -  base 10  to base 2
 * @n: number to print
 **/

void print_binary(unsigned long int n)
{
	int j, cts = 0;
	unsigned long int position;

	for (j = 63; j >= 0; j--)
	{
		position = n >> j;

		if (position & 1)
		{
			_putchar('1');
			cts++;
		}
		else if (cts)
			_putchar('0');
	}
	if (!cts)
		_putchar('0');
}
