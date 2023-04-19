#include "function_pointers.h"
/**
 * int_index - function that searches for an integer.
 *
 * @array: the array itself
 * @size: the number of elements in the array array
 *
 * @cmp: is a pointer to the function to be used to compare values
 *
 * Return: If no element matches, return -1
 * If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]) != 0)
		{
			return (a);
		}
	}
	return (-1);
}
