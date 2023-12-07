#include "main.h"

/**
 * print_diagonal - draws a diagonoal line
 * @n: number of times '\' should be printed
 * diagonol should end with a '\n'
 * if n is 0 or less, print '\n'
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j < i; j++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
