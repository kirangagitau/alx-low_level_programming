#include "main.h"

/**
 * print_alphabet - Aprogram for lower case letters
 *
 * Return: always 0
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
	return (0);
}
