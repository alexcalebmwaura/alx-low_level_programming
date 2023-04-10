#include <stdio.h>
/**
 * main - program that prints its name
 *
 * @argc: ignore
 * @argv: prints name of the program
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", *argv);
	return (0);
}
