#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to previously allocated memory
 * @old_size: size of allocated space for ptr
 * @new_size: size of new allocated space
 * Return: pointer to new allocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pointer1;
	char *old_pointer;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	pointer1 = malloc(new_size);
	if (!pointer1)
		return (NULL);
	old_pointer = ptr;
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			pointer1[i] = old_pointer[i];
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			pointer1[i] = old_pointer[i];
	}
	free(ptr);
	return (pointer1);
}

