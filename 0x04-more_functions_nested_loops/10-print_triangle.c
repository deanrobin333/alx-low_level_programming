#include "main.h"

/**
 * print_triangle - prints a triangle followed by a new line, using _putchar
 * @size: size of the triangle
 *
 * if size is 0 or less, print a new line only.
 * use '#' tp print the triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size == 0)
		_putchar('\n');
	for (i = 1; i <= size; i++)
	{
		for (j = size; j > i; j--)
			_putchar(' ');
		for (k = 1; k <= i; k++)
			_putchar('#');
		_putchar('\n');
	}
}
