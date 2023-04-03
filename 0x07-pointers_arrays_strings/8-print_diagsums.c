#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: array, or matrix
 * @size: represents number of columns
 * square of size gives you the square matrix
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i;
	int diag1 = 0;
	int diag2 = 0;

	for (i = 0; i < size; i++)
	{
		diag1 += a[i * size + i];
	}

	for (i = size - 1; i >= 0; i--)
	{
		diag2 += a[i * size + (size - i - 1)];
	}

	printf("%d, %d\n", diag1, diag2);

}
