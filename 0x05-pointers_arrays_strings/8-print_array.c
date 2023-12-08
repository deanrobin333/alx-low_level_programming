#include <stdio.h>
#include "main.h"

/**
 * print_array - print n elements of an array
 *				- Numbers must be separated by comma, followed by a space
 *				- The numbers should be displayed in the same order
 *					as they are stored in the array
 *
 * @a: array of integers to be printed
 * @n: number of elements of the array to be printed
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
