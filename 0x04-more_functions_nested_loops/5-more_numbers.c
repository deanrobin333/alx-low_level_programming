#include <stdio.h>
#include "main.h"

/**
 * more_numbers - outputs 10 times the numbers
 * from 0 to 14
 * Return: no value
 */

void more_numbers(void)
{
	int start = 0;
	int end = 14;
	int i;

	for (i = 1; i <= 10; i++)
	{
		while (start <= end)
		{
			_putchar(start > 9 ? (start / 10) + '0' : start + '0');
			if (start > 9)
			{
				_putchar((start % 10) + '0');
			}
			start++;
		}
		start = 0;
		_putchar('\n');
	}
}

