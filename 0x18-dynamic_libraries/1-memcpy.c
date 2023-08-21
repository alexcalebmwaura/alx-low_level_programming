#include "main.h"
/**
 * _memcpy - Function that copies memory area
 *
 * @dest: Character
 * @src: Character
 * @n: Unsigned integer
 *
 * Return: Returns a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}

