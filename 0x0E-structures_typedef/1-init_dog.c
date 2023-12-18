#include "dog.h"

/**
 * init_dog - function that initialized a variable of type `struct dog`
 * @d: pointer to struct dog
 * @name: pointer to name in struct dog
 * @age: age in struct dog
 * @owner: pointer to owner in struct dog
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
