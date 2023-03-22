#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - computes absolute value
 * @n: integer
 *
 * Return: always true
 */

int print_last_digit(int n)
{
	int post;
	int last;

	if (n < 0)
		post = -n;
	else
		post = n;
	
	last = post % 10;

	return (_putchar(last + '0'));
}
