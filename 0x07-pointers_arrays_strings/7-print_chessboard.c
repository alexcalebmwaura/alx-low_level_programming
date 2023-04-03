#include "main.h"
/**
 * print_chessboard - Function that prints the chessboard.
 *
 * @a: Character array
 *
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int y;
	int z;

	for (y = 0; y <= 7; y++)
	{
		for (z = 0; z <= 7; z++)
		{
			_putchar(a[y][z]);
		}
	_putchar('\n');
	}
}
