#include "main.h"

/**
 * print_binary - prints binary representation of a number
 * @n: number to print
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned int max_int, len, i;

	len = sizeof(int) * 8;

	max_int = 1 << 31;

	if (n == 0)
		_putchar('0');
	for (i = 0; i < len;)
	{
		if ((n & (max_int >> i)) != (max_int >> i))
			i++;
		else if ((n & (max_int >> i)) == (max_int >> i))
			break;
	}

	for (; i < len; i++)
	{
		if ((n & (max_int >> i)) == (max_int >> i))
			_putchar('1');
		else
			_putchar('0');
	}
}
