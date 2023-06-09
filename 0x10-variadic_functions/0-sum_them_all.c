#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of all its parameters.
 *
 * @n: Number of arguments
 *
 * Return: If n == 0, return 0 else return sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int a, sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(args, n);
	for (a = 0; a < n; a++)
	{
		sum += va_arg(args, unsigned int);
	}
	va_end(args);
	return (sum);
}

