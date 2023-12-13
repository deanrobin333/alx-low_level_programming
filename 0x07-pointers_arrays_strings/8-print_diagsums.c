#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of 2 diagonals of a square matrix
 * @a: pointer to square matrix array
 * @size: size of the array
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j, k, sum_p = 0, sum_r = 0;

	for (i = 0; i < size; i++)
	{
		k = i;

		for (j = 0; j < size; j++)
		{
			sum_p = sum_p + (*(a + ((i * size) + j) + k));
			break;
		}
	}

	for (i = 0; i < size; i++)
	{
		k = i;

		for (j = 0; j < size; j++)
		{
			sum_r = sum_r + (*(a + ((i * size) + (size - 1)) - k));
			break;
		}
	}
	printf("%d, %d\n", sum_p, sum_r);

}
