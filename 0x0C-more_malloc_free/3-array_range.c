#include "main.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers
 *
 * @min: Input 1
 * @max: Input 2
 *
 * Return: If malloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int *array_range;
	int a, size;

	if (min > max)
	{
		return (NULL);
	}
	size = (max - min + 1);
	array_range = malloc(size * sizeof(int));
	if (array_range == NULL)
	{
		return (NULL);
	}
	for (a = 0; min <= max; a++)
		array_range[a] = min++;
	return (array_range);
}

