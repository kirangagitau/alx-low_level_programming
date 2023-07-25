#include "main.h"

/**
 * _print_rev_recursion - recusion function for printing strings.
 * @s: supplied string.
 *
 **/

void _print_rev_recursion(char *s)
{
	if (*s) /* if suplied with string then start printing*/
	{
		_print_rev_recursion(s + 1); /* reverse character */
		_putchar(*s);
	}
}
