#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * print_sign - checks for sign of a character
 * @n: integer
 * Return: 1 if lower, 0 otherwise
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
