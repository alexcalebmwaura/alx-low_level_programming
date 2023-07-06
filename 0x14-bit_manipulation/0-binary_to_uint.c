#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 *
 * @b: is pointing to a string of 0 and 1 chars
 *
 * Return:  the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int binary_to_uint = 0;
	int a;

	if (!b)
	{
		return (0);
	}
	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > 'a')
		{
			return (0);
		}
		binary_to_uint = 2 * binary_to_uint + (b[a] - '0');
	}
	return (binary_to_uint);
}
