#include "main.h"
/**
 * swap_int - Entry point
 * @a: Entry
 * @b: Entry
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
