#include "main.h"
/**
 * print_numbers - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
	char number;

	for (number = '0'; number <= '9' ; number++)
	{
		_putchar(number);
	}
	_putchar('\n');
}
