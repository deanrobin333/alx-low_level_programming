#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: variable holding starting number to print from
 * Return: nothing
 */

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i == 98)
				break;
			printf(", ");
		}
		printf("\n");
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i == 98)
				break;
			printf(", ");
		}
		printf("\n");
	}
}
