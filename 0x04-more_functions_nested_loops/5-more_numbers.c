#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 * Return: void
 */

void more_numbers(void)
{
	int i, j;

	for (j = 1; j <= 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			_putchar(i <= 9 ? (i + '0') : ((i / 10) + '0'));
			if (i > 9)
				_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}

}
