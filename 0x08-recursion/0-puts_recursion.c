#include "main.h"

/**
 * _puts_recursion - gives the out put recursively
 * @S: the input string to be worked on.
 * Return: Always 0. 
 */

void _puts_recursion(char *S)
{
	if(*S)
	{
		_putchar(*S);
		_puts_recursion(S+1);
	}
	else
		_putchar('\n');
}
