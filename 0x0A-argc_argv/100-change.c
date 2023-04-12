#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints the minimum number
 * of coins to make change for an amount of money.
 *
 * @argc: Input 1
 * @argv: Input 2
 *
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int input, twenties, tens, fives, twos, ones, totalcoins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	input = atoi(argv[1]);

	twenties = input / 25;
	input %= 25;
	tens = input / 10;
	input %= 10;
	fives = input / 5;
	input %= 5;
	twos = input / 2;
	input %= 2;
	ones = input;
	totalcoins = (twenties + tens + fives + twos + ones);
	printf("%d\n", totalcoins);
	return (0);
}
