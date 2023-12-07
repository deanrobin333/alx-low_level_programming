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
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	if (n / 10 != 0)
	{
		/* perform recursion until it gets to 0 */
		print_number(n / 10);
	}
	/* we print from the last going to the first one by one */
	_putchar((n % 10) + '0');
}
