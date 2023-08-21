#include "main.h"
/**
 * _islower - Entry point
 * @c: The character to be checked
 * description: Outputs code
 * Return: No value
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
