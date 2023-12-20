#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: pointer to array to search
 * @size: size of array
 * @cmp: pointer to function to perform search
 *
 * Return: index of 1st element where `cmp` doesnt return 0
 *		-1 - if no element matches
 *		-1 - if size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
