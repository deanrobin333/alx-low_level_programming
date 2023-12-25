#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints binary representation of a number
 * @n: number to print
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int max_int = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int start_printing = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (; max_int > 0; max_int >>= 1)
	{
		if (n & max_int)
		{
			start_printing = 1;
			_putchar('1');
		}
		else if (start_printing || max_int == 1)
		{
			_putchar('0');
		}
	}
}

