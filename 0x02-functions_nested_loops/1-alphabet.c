#include "main.h"
/**
 * main - Entry point
 * description: Outputs
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char c;

	for (int c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	return (0);
}
