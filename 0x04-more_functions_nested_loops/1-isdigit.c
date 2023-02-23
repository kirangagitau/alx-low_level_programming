#include "main.h"

/**
 * _isdigit - upper case letter checking.
 * @c: character to check case
 *
 * Return: 0  || 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
