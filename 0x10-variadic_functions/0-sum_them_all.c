#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns sum of all its parameters
 * @n: number of arguments
 * @...: arguments
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list numb;
	unsigned int i;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(numb, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(numb, int);
	}
	va_end(numb);
	return (sum);
}
