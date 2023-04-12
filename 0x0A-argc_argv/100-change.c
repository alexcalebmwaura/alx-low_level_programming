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
	int cents, twenties, tens, fives, twos, ones, totalcoins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	twenties = cents / 25;
	cents %= 25;
	tens = cents / 10;
	cents %= 10;
	fives = cents / 5;
	cents %= 5;
	twos = cents / 2;
	cents %= 2;
	ones = cents;
	totalcoins = (twenties + tens + fives + twos + ones);
	printf("%d\n", totalcoins);
	return (0);
}
