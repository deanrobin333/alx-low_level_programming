#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - prints n number of lines (underscore)
 * @n: number of times to print line
 */

void print_diagonal(int n)
{

	int count = 0;
	int start = 0;
	int end;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (count < n)
		{
			end = count;
			while (start <= end)
			{
				if (start == end)
				{
					_putchar('\\');
					_putchar('\\');
				}
				else
					_putchar(' ');
				start++;
			}
			start = 0;
			count++;
		}
	}
}
