#include "main.h"

int root(int n, int i);

/**
 * _sqrt_recursion - function returning the number's root
 * @n: to be calculated root for
 *
 * Return: Always (0).
 *
 **/

int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	return (root(n, 0));
}


/**
 * root - function doing the recursion to find the root
 * @n: to be calculated root for
 * @i: value for iteration counts
 *
 * Return: root or error
 **/

int root(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (root(n, i + 1));
}
