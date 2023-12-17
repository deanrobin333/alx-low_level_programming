#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocated
 *
 * Return: pointer to allocated memory
 *
 * INT_MAX = 4,000,000,000
 */

void *malloc_checked(unsigned int b)
{
	void *array;

	array = malloc(b);

	if (array == NULL)
		exit (98);

	return (array);
}
