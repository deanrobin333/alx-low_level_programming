#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints the 'n' times table starting with 0
 * If n is > 15 or < 0 the function should not print anything
 *
 * @n: variable holding the times table to print
 *
 * Return: nothing
 *
 * Remember from task 9 - 9-times_table.c
 * "if (second == 0)"
 * second value is what determines the first value in each row
 */

void print_times_table(int n)
{
	int first, second, multi;

	if (n <= 15 && n >= 0)
	{
		for (first = 0; first <= n; first++)
		{
			for (second = 0; second <= n; second++)
			{
				multi = first * second;

				if (second == 0)
					printf("%d", multi);
				else if (multi == 0 && second != 0)
					printf(",   %d", multi);
				else if (multi <= 9 && multi != 0)
					printf(",   %d", multi);
				else if (multi >= 10 && multi < 100)
					printf(",  %d", multi);
				else if (multi >= 100)
					printf(", %d", multi);
			}
			printf("\n");
		}
	}
}
