#include "main.h"

/**
 * print_number - prints an integer
 * @n: Integer to print
 *
 * You can only use _putchar function to print
 * You are not allowed to use long
 * You are not allowed to use arrays or pointers
 * You are not allowed to hard-code special values
 *
 * Return: void
 */

void print_number(int n)
{
	int divided, remainder;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}

	if (n <= 9)
		_putchar(n + '0');
	if (n >= 10 && n <= 99)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	if (n >= 100 && n <= 999)
	{
		divided = n / 100;
		remainder = n % 100;
		_putchar(divided + '0');
		_putchar((remainder / 10) + '0');
		_putchar((remainder % 10) + '0');

	}
	if (n >= 1000 && n <= 9999)
	{
		divided = n / 100;
		_putchar((divided / 10) + '0');
		_putchar((divided % 10) + '0');
		remainder = n % 100;
		_putchar((remainder / 10) + '0');
		_putchar((remainder % 10) + '0');
	}
}
