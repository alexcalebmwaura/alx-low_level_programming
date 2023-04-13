#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory using malloc
 *
 * @b: Input
 *
 * Return: if malloc fails,
 * the malloc_checked function should cause normal process
 * termination with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *malloc_checked = malloc(b);
	{
		if (malloc_checked == NULL)
		{
			exit(98);
		}
	}
	return (malloc_checked);
}
