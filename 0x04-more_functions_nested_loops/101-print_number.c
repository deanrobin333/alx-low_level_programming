#include <stdio.h>
#include "main.h"
/**
 * print_number - prints an integer
 * @n: integer to print
 * Return: void.
 */
void print_number(int n)
{
	unsigned int numb;

	if (n < 0)
	{
		_putchar('-');
		numb = -n;
	}
	else
	{
		numb = n;
	}
	if ((numb / 10) != 0)
	{
		print_number(numb / 10);
	}
	_putchar((numb % 10) + '0');

}
