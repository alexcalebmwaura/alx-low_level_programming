#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * *_strdup - function that returns a pointer
 * to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: Input
 *
 * Return: NULL if str = NULL
 */
char *_strdup(char *str)
{
	char *_strdup;

	_strdup = (char *)malloc(strlen(str) + 1);
	if (_strdup == NULL)
	{
		return (NULL);
	}
	strcpy(_strdup, str);
	return (_strdup);
}
