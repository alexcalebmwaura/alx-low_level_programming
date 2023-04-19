#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints the opcodes of its own main function.
 *
 * @argc: Argument count
 * @argv: Arguement vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int byte, a;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	byte = atoi(argv[1]);
	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}
	arr = (char *)main;
	for (a = 0; a < byte; a++)
	{
		if (a == byte - 1)
		{
			printf("%02hhx\n", arr[a]);
			break;
		}
		printf("%02hhx ", arr[a]);
	}
	return (0);
}
