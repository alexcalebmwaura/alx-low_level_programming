#include<stdio.h>
#include<stdlib.h>
/**
 * main -  program that adds positive numbers
 *
 * @argc: input
 * @argv: input
 *
 * Return: number contains symbols that are not digits
 * return 1
 */
int main(int argc, char **argv)
{
	int i;
	int sum;

	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
