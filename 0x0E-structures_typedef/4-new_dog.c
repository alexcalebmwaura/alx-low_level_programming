#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - returns the length of a string
 *
 * @s: string
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int a;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}
/**
 *_strcpy - copies the string
 *
 * @dest: pointer to the buffer
 * @src: string
 *
 * Return: the pointer
 */

char *_strcpy(char *dest, char *src)
{
	int b, c;

	b = 0;
	while (src[b] != '\0')
	{
		b++;
	}
	for (c = 0; c < b; c++)
	{
		dest[c] = src[c];
	}
	dest[c] = '\0';
	return (dest);
}
/**
 * new_dog - function that creates a new dog.
 *
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: NULL if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int length1, length2;

	length1 = _strlen(name);
	length2 = _strlen(owner);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	dog->name = malloc(sizeof(char) * (length1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (length2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}






