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

	array = malloc(sizeof(int) * (max - min + 1));

	if (array == NULL)
		return (NULL);

	for (i = min, k = 0; i <= max; i++, k++)
	{
		array[k] = i;
	}
	/**
	 * Loop could also be written like so, and then removing `k` declaration:
	 * for (i = 0; min <= max; i++){
	 *		array[i] = min++;}
	 */

	return (array);
}
