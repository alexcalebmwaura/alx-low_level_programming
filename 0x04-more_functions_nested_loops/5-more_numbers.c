#include "main.h"
/**
 * more_numbers - Entry point
 *
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int i = 0, n;

	while (i < 10)
	{
		n = 0;

		while (n < 15)
		{
			_putchar(n);
			n++;
		}
		_putchar(i);
		i++;
		_putchar('\n');
	}
}
