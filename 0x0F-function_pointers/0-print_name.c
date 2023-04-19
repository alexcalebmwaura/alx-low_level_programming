#include "function_pointers.h"
/**
 * print_name - function that prints a name.
 *
 * @name: The name itself
 *
 * @f: funtion pointer of the funtion print_name
 *
 * Return: Always 0 (Success)
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
