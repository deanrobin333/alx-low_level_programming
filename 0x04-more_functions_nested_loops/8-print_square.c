#include <stdio.h>
#include "main.h"

/**
 * print_square - prints square
 * @n: number of times to print line
 */

void print_square(int n)
{

	int i;
	int j;

	for (i = 0; i <= n; i++)
	{
		if (n <= 0)
		{
			putchar('a');
		}
		for (j = 0; j <= n; j++)
		{
				_putchar('#');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
