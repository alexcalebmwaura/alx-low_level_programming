#include "main.h"
/**
 * more_numbers - Entry point
 *
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int i = 0;
	int n;

	while (i < 10)
	{
		for (n = '0'; n < '9'; n++)
		{
			_putchar(n);
		}
		_putchar(i);
		i++;
		_putchar('\n');
	}
}
