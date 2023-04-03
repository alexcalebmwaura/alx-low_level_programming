#include<stdio.h>
#include "main.h"
/**
 * print_diagsums - function that prints the sum
 * of the two diagonals of a
 * square matrix of integers.
 *
 * @a:Integer
 * @size:Integer
 *
 * Return: Always 0 (Success)
 */

void print_diagsums(int *a, int size)
{
	int x = 0;
	int y = 0;
	int z;

	for (z = 0; z < size; z++)
	{
		x = x + a[z * size + z];
	}
	for (z = size - 1; z >= 0; z--)
	{
		y += a[z * size + (size - z - 1)];
	}
	printf("%d, %d\n", x, y);
}
