#include "main.h"

/**
 * factorial - gives number's factorial.
 * @n: variable to get factorial
 *
 * Return: factorial of variable
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
