#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - gets the length of a string
 * @s: string to evaluate
 *
 * Return: the string length
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		;
	}
	return (i);
}

/**
 * *_strcpy - copies value of src to dest
 * add a terminating null character to new string
 * @dest: pointer to receive copy
 * @src: string to be copied
 *
 * Return: pointer to new string
 */

char *_strcpy(char *dest, char *src)
{
	int length;
	int i;

	for (length = 0; (src[length] != '\0'); length++)
	{
		length++;
	}
	for (i = 0; i < length; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - function that creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: if success returns pointer to the new dog
 * else NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
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

