#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char alpha;

	for (int alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
		putchar('\n');
	return (0);
}
