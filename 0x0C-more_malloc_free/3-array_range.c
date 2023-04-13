#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - function that creates an array of integers
 * @min: minimum range of values included in array
 * @max: maximum range of values
 *
 * Return: a pointer to new array
 */

int *array_range(int min, int max)
{
	int *pointer;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	pointer = malloc(sizeof(int) * (max - min + 1));
	if (pointer == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		pointer[i] = min++;
	}
	return (pointer);
}
