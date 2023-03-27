#include<stdio.h>
#include "main.h"
/**
 * print_array - Entry point
 * @a: Entry
 * @n: Entry
 * Return: Always 0 (Success)
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
		if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
	printf("\n");
}

