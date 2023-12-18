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
 *
 *
 * if we did not need to store a copy `using strcpy`
 *		we would directly assign the struct.
 * but since we must store a copy every data that is a string
 *		in struct must be assigned some space, using malloc
 *		so we assign `name` and `owner` space.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	/* we can also do `dog_t *created_dog` since we `typedef` in dog.h */
	struct dog *created_dog;
	int len_name = strlen(name), len_owner = strlen(owner);

	/*created_dog is the new_dog, we assign it malloc of type struct dog */
	created_dog = malloc(sizeof(struct dog));
	if (created_dog == NULL)
		return (NULL);
	/**
	 * since we are copying, we must create the memory to copy to.
	 * if it fails we return NULL, and free the struct, thereby
	 *		releasing any memory assigned to the struct
	 */
	/*if `created_dog->name` fails, we free `created_dog` and return NULL */
	created_dog->name = malloc(sizeof(char) * (len_name + 1));
	if (created_dog->name == NULL)
	{
		free(created_dog);
		return (NULL);
	}
	/**
	 * if `created_dog->owner` fails, we free 1st
	 * `created_dog` then , `created_dog->name`, and then return NULL
	 */
	created_dog->owner = malloc(sizeof(char) * (len_owner + 1));
	if (created_dog->owner == NULL)
	{
		free(created_dog);
		free(created_dog->name);
		return (NULL);
	}
	/**
	 * freeing as above will ensure that `created_dog` is not assigned memory
	 * if it fails to create memory for any of its elements
	 */
	/* then copy. for but `age`, just assign directly since its not a string */
	strcpy(created_dog->name, name);
	created_dog->age = age;
	strcpy(created_dog->owner, owner);
	return (created_dog);
}
