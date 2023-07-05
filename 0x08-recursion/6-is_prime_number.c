#include "main.h"

int prime(int n, int j);

/**
 * is_prime_number - checks if given number is prime or not
 * @n: the number checking if prime
 *
 * Return: 1 for prime, 0 otherwise
 **/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, n - 1));
}

/**
 * prime - checks given value to see if prime.
 * @n: the number checing if prime
 * @j: value for doing the iterations
 *
 * Return: 1 for prime, 0 otherwise.
 *
 **/

int prime(int n, int j)
{
	if (j == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (prime(n, i - 1));
}
