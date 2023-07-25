#include "main.h"

/**
 * is_prime_number - checks if given number is prime or not
 * @n: the number checking if prime
 *
 * Return: 1 for prime, 0 otherwise
 **/

int is_prime_number(int n)
{
	int prime;

	prime = 1;
	if ((n % 2) == 0)
	{
		prime = 0;
	}
	if (prime == 1)
		return (1);
	else
		return (0);
	return (0);
}
