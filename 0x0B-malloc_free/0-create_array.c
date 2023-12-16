#include "main.h"

/**
 * create_array - creates an array of chars and initializes it
 * @size: size of array
 * @c: character to initialize array with
 *
 * Return: initialized array
 */

char *create_array(unsigned int size, char c)
{
	char *array = NULL;
	unsigned int i;

	if (size <= 0 || c = '\0')
		return (NULL);

	array = (char *)malloc(size);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	array[size] = '\0';

	return (array);
}
