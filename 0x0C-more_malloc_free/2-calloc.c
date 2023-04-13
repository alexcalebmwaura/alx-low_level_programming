#include "main.h"
#include <stdlib.h>
/**
 * _memset - Entry point
 *
 * @a: Input 1
 * @b: Input 2
 * @c: Input 3
 *
 * Return: Always 0 (SUccess)
 */
char *_memset(char *a, char b, unsigned int c)
{
	unsigned int x;

	for (x = 0; x < c; x++)
	{
		a[x] = b;
	}
	return (a);
}
/**
 * _calloc - function that allocates memory for an array, using malloc
 *
 * @nmemb: Input 1
 * @size: Input 2
 *
 * Return: If malloc fails, then _calloc returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *_calloc;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	_calloc = malloc(size * nmemb);
	if (_calloc == NULL)
	{
		return (NULL);
	}
	_memset(_calloc, 0, nmemb * size);
	return (_calloc);
}

