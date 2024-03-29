#include "main.h"

/**
 * clear_bit - func to set val of a given bit to 0
 * @n: pointer to the number
 i* @index: index of the bit
 *
 * Return: 1(success), or -1(failure)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
