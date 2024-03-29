#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function that prints struct dog
 * @d: pointer to struct dog
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";

	if (d->owner == NULL)
		d->owner = "(nil)";

	/* we can use `d->name` or `(*d).name` */
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
