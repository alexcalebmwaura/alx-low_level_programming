#include "main.h"
#include <stdlib.h>
/**
 * *create_array - function that creates an array of chars
 * and initializes it with a specific char
 *
 * @size: Input 1
 * @c: input 2
 *
 * Return: create_array
 */
char *create_array(unsigned int size, char c)
{
	char *create_array;
	unsigned int i;

	create_array = (char *)malloc(size * sizeof(char));
	if (size == 0 || create_array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		create_array[i] = c;
	}
	return (create_array);
}
