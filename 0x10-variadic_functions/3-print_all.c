#include "variadic_functions.h"
/**
 * print_all - function that prints anything.
 *
 * @format: a list of types of arguments passed to the function
 *
 * Return: Input
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *string, *sep = "";

	va_start(args, format);
	if (format)
	{
		int a = 0;

		while (format[a])
		{
			switch (format[a])
			{
				case 'c':
					printf("%s%c", sep, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(args, double));
					break;
				case 's':
					string = va_arg(args, char*);
					if (!string)
					{
						string = "(nil)";
					}
					printf("%s%s", sep, string);
					break;
				default:
					a++;
					continue;
			}
			sep = ",";
			a++;
		}
	}
	va_end(args);
	printf("\n");
}
