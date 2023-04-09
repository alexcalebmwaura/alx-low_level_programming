#include "main.h"
/**
 * _isdigit - Entry point
 * @c: Int c
 * Return: Returns 1 if c is uppercase and returns 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
