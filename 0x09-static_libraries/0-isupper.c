#include "main.h"
/**
 * _isupper - Entry point
 * @c: Int c
 * Return: Returns 1 if c is uppercase and returns 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
