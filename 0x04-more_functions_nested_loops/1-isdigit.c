#include "main.h"

/**
 * _isupper - upper case letter checking.
 * @c: character to check case
 *
 * Return: 0  || 1
 */

int _isupper(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
