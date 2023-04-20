#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers, followed by a new line.
 *
 * @n: the number of integers passed to the function
 * @separator: the string to be printed between numbers
 *
 * Return: printed numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int a;

	va_start(args, n);
	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(args, unsigned int));
		if (a != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
