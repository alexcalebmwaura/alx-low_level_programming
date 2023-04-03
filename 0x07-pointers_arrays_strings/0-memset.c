#include "main.h"
/**
 * _memset - Fills memory with a constant byte.
 *
 * @s: Character
 * @b: Character
 * @n: Integer
 *
 * Return: Returns a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
