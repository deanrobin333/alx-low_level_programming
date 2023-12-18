#include "dog.h"

/**
 * free_dog - function that frees dogs
 * @d: pointer to struct dog to free
 *
 * Return: void
 *
 * order of freeing really matters.
 * You free from the last one allocated, to the first one allocated.
 */

void free_dog(dog_t *d)
{
	/* first check to make sure d is not NULL */
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
