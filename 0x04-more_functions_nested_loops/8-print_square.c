#include "main.h"

/**
 * print_square - prints a square followed by a new line
 * @size: is the size of the square
 * if size is 0 or less, print only a new line
 * use the character '#' to print the square
 *
 * Return: void
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
			_putchar('#');
		_putchar('\n');
	}

}
