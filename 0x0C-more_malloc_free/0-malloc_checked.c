#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of allocated memory
 * Return: a pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);

	if (pointer == NULL)
	{
		exit(98);
	}
	return (pointer);
}
