#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index.
 *
 * @index: is the index, starting from 0 of the bit you want to get.
 * @n: searched index
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int get_bit;

	if (index > 63)
	{
		return (-1);
	}
	get_bit = (n >> index) & 1;
	return (get_bit);
}
