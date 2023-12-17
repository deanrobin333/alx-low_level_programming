#include "main.h"
#include <string.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 *
 * memory is set to zero.
 *
 * Similar is calloc:
 * `(void *) calloc(size_t num, size_t size);`
 *		1. The number of elements of a particular data type that
 *			we need to allocate.
 *		2. the size of each element (size of the data type).
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *array;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc((size * nmemb));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
	{
		array[i] = 0;
	}

	return (array);
}


