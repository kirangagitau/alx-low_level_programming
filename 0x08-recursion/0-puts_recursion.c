#include "main.h"

/**
 * _puts_recursion - the function to write output
 * @s: given value to output
 *
 **/

void _puts_recursion(char *s)
{
	if (*s)
		write(1, s, 1);
		_putchar("\n");
}
