#include "main.h"

/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 * @loop: looping for the prime
 * @prime: The number weighing against
 * Return: 1 if n is a prime number, 0 if not
 */

int is_prime_number(int n)
{
	int loop;
	int prime = 1;

	if (n <= 1)
		return (0);
	for (loop = 2; loop < n; loop++)
	{
		if ((n % loop) == 0)
		{
			prime = 0;
		}
	}
	if (prime == 1)
		return (1);
	else
		return (0);
}
