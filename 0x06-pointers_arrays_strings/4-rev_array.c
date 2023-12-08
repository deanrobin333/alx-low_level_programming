#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array to reverse
 * @n: - number of elements of the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, first;
	int last = n - 1;

	for (i = 0; i < last; i++, last--)
	{
		first = a[i];
		a[i] = a[last];
		a[last] = first;
	}
}
