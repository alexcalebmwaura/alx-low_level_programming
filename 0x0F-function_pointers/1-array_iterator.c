#include "function_pointers.h"
/**
 * array_iterator -  function that executes a function given
 * as a parameter on each element of an array
 *
 * @array: The array
 * @size: the size of the array
 *
 * @action: is a pointer to the function you need to use
 *
 * Return: Always 0 (Success)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;
	for (a = 0; a < size; a++)
		action(array[a]);
}
