#include "main.h"
/**
 * main - Entry point
 *
 * Return - Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int  i = 0;
	char alpha;

	while (i < 10)

	{
		for (int alpha = 'a'; alpha <= 'z', alpha++)
		{
			_putchar(alpha)
		}
		_putchar('\n');
		i++;
	}
	return (0);
}
