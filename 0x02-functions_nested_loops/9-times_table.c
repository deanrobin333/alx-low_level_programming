#include <stdio.h>
#include "main.h"

/**
 * times_table - prints the 9 times table
 * Return: nothing
				 * "if (second == 0)"
				 * second value is what determines the first value in each row
				 * so we are saying if the second value is 0, print it alone.
				 *
				 * "else if (multi == 0 )"
				 * when we multiply the first and second.
				 * this helps print the first row, where the numbers are zero
				 *
				 * "else if (multi >= 10)"
				 * since _putchar prints a single character, we use
				 * division and modulus to get the full number
				 * for digits equal to or greater than 10.
 */

void times_table(void)
{
	int first, second, multi;

	for (first = 0; first <= 9; first++)
	{
		for (second = 0; second <= 9; second++)
		{
			multi = first * second;
			if (second == 0)
			{
				_putchar(multi + '0');
			}
			else if (multi == 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(multi + '0');
			}
			else if (multi <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(multi + '0');
			}
			else if (multi >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((multi / 10) + '0');
				_putchar((multi % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
