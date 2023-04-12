#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
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

	int a;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (a = 1; a < argc; a++)
	{
		int b = 0;

		while (argv[a][b])
		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
			b++;
		}
		sum += atoi(argv[a]);
	}
	printf("%d\n", sum);
	return (0);
}

