#include "main.h"

/**
 * _pow_recursion - get power of number.
 * @x: base number.
 * @y: power factor.
 *
 * Return: return the power of given args
 **/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0) /* Any number power 0 = 1 */
		return (1);
	return (x * _pow_recursion(x, y - 1)); /* recursive calling function. */
}
