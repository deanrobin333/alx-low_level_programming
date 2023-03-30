#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * reverse_array - reverses content of an array
 * @a: array
 * @n: number of elements in array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int reverse;

	for (i = 0; i < n--; i++)
	{
		reverse = a[i];
		a[i] = a[n];
		a[n] = reverse;
	}
}
