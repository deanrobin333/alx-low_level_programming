#include "main.h"

/**
 * print_line - prints a string line
 * @n: number of times the character '_' should be printed
 * line should end with '\n'
 * if n is 0 or less, print only '\n'
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (n > 0)
			_putchar('_');
		else
			_putchar('\n');
	}
	_putchar('\n');
}
