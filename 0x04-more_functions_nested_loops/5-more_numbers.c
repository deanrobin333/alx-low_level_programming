#include <stdio.h>
#include "main.h"

/**
 * more_numbers - outputs 10 times the numbers
 * from 0 to 14
 * Return: no value
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			printf("%d", j);
		}
	printf("\n");
	}
}

