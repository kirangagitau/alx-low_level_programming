#include "main.h"

/**
 * _puts_recursion - the function to write output
 * @s: given value to output
 *
 * Return: Exit status, always 0 for success
 **/

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s+1); /*recursive function call*/
	}
	else
		_putchar('\n');
}
