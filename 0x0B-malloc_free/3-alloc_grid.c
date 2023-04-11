#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid - function that returns a pointer to a 2
 * dimensional array of integers
 *
 * @width: Input 1
 * @height: Input 2
 *
 * Return:  function should return NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int a;
	int b;
	int **alloc_grid;

	if (width < 0 || height <= 0)
	{
		return (NULL);
	}
	alloc_grid = malloc(height * sizeof(int *));
	if (alloc_grid  == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		alloc_grid[a] = malloc(width * sizeof(int));
		if (alloc_grid[a] == NULL)
		{
			for (; a >= 0 ; a--)
			{
				free(alloc_grid[a]);
			}
			free(alloc_grid);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			alloc_grid[a][b] = 0;
	}
	return (alloc_grid);
}
