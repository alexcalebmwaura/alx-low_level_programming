#include "main.h"
#include<string.h>
/**
 * _strlen - Entry point
 * @s: Entry
 * Return: Always 0 (Success)
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
