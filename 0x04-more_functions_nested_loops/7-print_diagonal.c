#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - prints n number of lines (underscore)
 * @n: number of times to print line
 */

void print_diagonal(int n)
{

	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		if (n > 0)
		{
			for (j = 0; j < 10; j++)
			{
				_putchar(' ');
				
			}
				_putchar(92);
		}
		else
		{
			putchar('\n');
		}
	}
	_putchar('\n');
}
