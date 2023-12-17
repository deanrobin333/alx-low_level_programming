#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum range (included)
 * @max: maximum range (include)
 *
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
	int *array;
	int i, k;

	if (min > max)
		return (NULL);
	
	if (min == 0)
		array = malloc((sizeof(int) * max) + sizeof(int));
	else
		array = malloc((sizeof(int) * max));

	if (array == NULL)
		return (NULL);

	for (i = min, k = 0; i <= max; i++, k++)
	{
		array[k] = i;
	}

	return (array);
}
