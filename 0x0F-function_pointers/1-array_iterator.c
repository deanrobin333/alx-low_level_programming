#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function that executes a function
 * on each element of an array
 * @array: array to peform function
 * @size: number of elements
 * @action: function pointer working on int data type
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
