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
	/**
	 * check if d has not been assigned, if it is null
	 * if it is null, we assign it using malloc,
	 * and give it the type struct dog
	 */
	if (d == NULL)
		d = malloc(sizeof(struct dog);

	d->name = name;
	d->age = age;
	d->owner = owner;
}
