#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 *		on each element of an array
 * @array: pointer to array
 * @size: size of array
 * @action: pointer to action to perform
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
