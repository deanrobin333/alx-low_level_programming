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

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
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
}
