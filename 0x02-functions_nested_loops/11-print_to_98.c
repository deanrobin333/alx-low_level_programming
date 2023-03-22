#include <stdio.h>
#include "main.h"

/**
* print_to_98 - printing numbers from n to 98
* @n: integers
* Return: 0
*/

void print_to_98(int n)
{
	while (n <= 98)
	{
		if (n >= 0 && n <= 9)
		{
			_putchar(n + '0');
			if(n == 98)
			{
				break;
			}
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			if(n == 98)
			{
				break;
			}
			_putchar(',');
			_putchar(' ');
		}
		n++;
	}
	_putchar('\n');
}
