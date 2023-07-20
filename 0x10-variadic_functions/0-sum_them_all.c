#include <stdarg.h>

/**
 * sum_them_all - variadic function summing arguments.
 * @n: the first argument for sum.
 *
 * Return: the sum of the arguments.
 **/

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum;
	unsigned int i;

	va_start(args, n);
	if (n == 0)
		return (0);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(args, const unsigned int);

	va_end(args);
	return (sum);
}
