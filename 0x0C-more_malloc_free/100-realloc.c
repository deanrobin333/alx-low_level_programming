#include "main.h"

/**
 * _realloc - function that reallocated a memory block using malloc and free
 * @ptr: a pointer to the memory previously allocated with a call to malloc:
 *		malloc(old_size).
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block.
 *
 * Return: pointer to reallocated array
 *
 * The contents will be copied to the newly allocated space, in the range.
 *		from the start of ptr up to the minimum of the old and new sizes.
 *
 * If new_size > old_size, the “added” memory should not be initialized.
 * If new_size == old_size do not do anything and return ptr.
 * If ptr is NULL, then the call is equivalent to malloc(new_size),
 *		for all values of old_size and new_size.
 * If new_size is equal to zero, and ptr is not NULL, then
 *		the call is equivalent to free(ptr). Return NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr, *old_ptr;
	unsigned int i;

	/* If new_size == old_size do not do anything and return ptr. */
	if (new_size == old_size)
		return (ptr);

	/* If ptr is NULL, then the call is equivalent to malloc(new_size) */
	if (!ptr)
		return (malloc(new_size));

	/* If new_size == 0, and ptr != NULL, then is = free(ptr). Return NULL */
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);

	if (!new_ptr)
		return (NULL);

	old_ptr = ptr;

	/* if new_size > old_size added memory should not be initialized */
	/* hence if new_size < old_size, initialize */
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			new_ptr[i] = old_ptr[i];
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			new_ptr[i] = old_ptr[i];
	}
	free(ptr); /*since we have `new_ptr`, we must release this one */
	/* the example 100-main.c file will free `new_ptr`*/
	return (new_ptr);
}
