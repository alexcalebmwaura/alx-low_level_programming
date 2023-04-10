#include <stdio.h>
/**
 * main - program that prints all arguments it receives
 *
 * @argc: ignore
 * @argv: prints the agruments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
		printf("\n");
	}

	return (0);
}
