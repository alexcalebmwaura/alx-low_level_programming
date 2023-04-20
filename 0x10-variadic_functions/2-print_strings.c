#include "variadic_functions.h"
/**
 * print_strings - function that prints numbers, followed by a new line
 *
 * @n: number of integers passed to the function
 * @separator: the string to be printed between numbers
 *
 * Return: numbers
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *string;
	unsigned int a;

	va_start(args, n);
	for (a = 0; a < n; a++)
	{
		string = va_arg(args, char *);
		if (string == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", string);
		}
		if (a != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}

