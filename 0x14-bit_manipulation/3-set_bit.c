#include "main.h"

/**
 * set_bit - sets  bit at a given index to 1
 * @n: pointer
 * @index: index of the bit
 *
 * Return: 1(success) or a -1(failure)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
