#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * *str_concat -  function that concatenates two strings
 *
 * @s1: Input 1
 * @s2: Input 2
 *
 * Return: str_concat
 */
char *str_concat(char *s1, char *s2)
{
	int s1_length = strlen(s1);
	int s2_length = strlen(s2);
	int size = s1_length + s2_length + 1;
	int i;

	char *str_concat;

	str_concat = malloc(size * sizeof(char));
	
	for (i = 0; i < s1_length; i++)
	{
		str_concat[i] = s1[i];
	}
	for (i = 0; i < s2_length; i++)
	{
		str_concat[s1_length + i] = s2[i];
	}
	str_concat[size - 1] = '\0';
	return (str_concat);
}

