#include "dog.h"

/**
 * new_dog - function that creates a new dog
 * @name: pointer to name of new dog
 * @age: age of new dog
 * @owner: pointer to owner of new dog.
 *
 * Must store a copy of `name` and `owner`.
 *
 * Return: pointer to new dog of type `struct dog`
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *created_dog;
	char *new_name, *new_owner;

	created_dog = malloc(sizeof(struct dog));
	if (created_dog == NULL)
		return (NULL);

	new_name = name;
	new_owner = owner;

	if (name != NULL)
		created_dog->name = new_name;
	created_dog->age = age;
	if (owner != NULL)
		created_dog->owner = new_owner;

	return (created_dog);
}
