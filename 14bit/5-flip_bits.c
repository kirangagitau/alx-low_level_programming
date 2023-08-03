#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 *
 * @n: num1
 * @m: num2
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, cnt = 0;
	unsigned long int poss;
	unsigned long int exor = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		poss = exor >> j;
		if (poss & 1)
			cnt++;
	}

	return (cnt);
}
