#include <stdio.h>
#include "main.h"

/**
 * print_line - prints n number of lines (underscore)
 * @n: number of times to print line
 */

void print_line(int n)
{

	int i;

	for (i = 0; i < n; i++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
		else
		{
			putchar('\n');
		}
	}
	_putchar('\n');
}
