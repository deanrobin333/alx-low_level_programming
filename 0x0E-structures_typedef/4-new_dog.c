#include "dog.h"
#include <string.h>

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
	int len_name, len_owner;

	len_name = strlen(name);
	len_owner = strlen(owner);

	created_dog = malloc(sizeof(struct dog));
	if (created_dog == NULL)
		return (NULL);

	created_dog->name = malloc(sizeof(char) * (len_name + 1));
	if (created_dog->name == NULL)
	{
		free(created_dog);
		return (NULL);
	}

	created_dog->owner = malloc(sizeof(char) * (len_owner + 1));
	if (created_dog->owner == NULL)
	{
		free(created_dog);
		free(created_dog->name);
		return (NULL);
	}


	strcpy(created_dog->name, name);
	created_dog->age = age;
	strcpy(created_dog->owner, owner);


	return (created_dog);
}
