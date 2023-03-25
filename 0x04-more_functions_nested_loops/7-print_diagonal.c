#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - prints n number of lines (underscore)
 * @n: number of times to print line
 */

void print_diagonal(int n)
{
	int line;
	int space;

	for (line = 1; line <= n; line++)
	{
		for (space = 1; space <= line; space++)
		{
			_putchar(' ');
		}
	_putchar('\\');
	_putchar('\n');
	}
}
