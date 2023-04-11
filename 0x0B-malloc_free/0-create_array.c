#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - function that creates an array of chars
 * @size: defines the size of the array
 * @c: characters in the array
 * Return: Returns a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	int i;

	array = malloc(size * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < 98; i++)
		{
			array[i] = c;
		}
	}

	return (array);
}
