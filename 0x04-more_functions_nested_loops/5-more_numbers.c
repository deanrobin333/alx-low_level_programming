#include <stdio.h>
#include "main.h"

/**
 * more_numbers - outputs 10 times the numbers
 * from 0 to 14
 * Return: no value
 */

void more_numbers(void)
{
	int h;
	int i;

	for (h = 1; h <= 10; h++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i <= 9)
			{
				_putchar(i + '0');
			}
			else
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
		}
	_putchar('\n');
	}
}

