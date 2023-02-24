#include "main.h"

/**
 * print_line - print a line on screen
 *
 * @n: dictates number of times to print
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('n');
	}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
