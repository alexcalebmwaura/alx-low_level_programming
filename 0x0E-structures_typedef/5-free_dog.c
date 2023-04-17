#include <stdlib.h>
#include "dog.h"
/**
 * free_dog -  function that frees dogs
 *
 * @d: Input
 *
 * Return: Always 0 (Success)
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
