#include "main.h"
#include <stdlib.h>
/**
 * *argstostr -  function that concatenates
 * all the arguments of your program.
 *
 * @ac: Input 1
 * @av: Input 2
 *
 * Return: Returns NULL if ac == 0 or av == NULL
 */
char *argstostr(int ac, char **av)
{
	int a, b, c = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			l++;
	}
	l += ac;
	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			str[c] = av[a][b];
			c++;
		}
		if (str[c] == '\0')
		{
			str[c++] = '\n';
		}
	}
	return (str);
}
