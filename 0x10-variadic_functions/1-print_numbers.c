#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string to be printed between numbers.
 *				if seperator is `NULL`, dont print it.
 * @n: number of integers passed to the function
 * @...: remaining arguments
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list values;

	if (n <= 0)
		return;
	va_start(values, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(values, int));
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(values);
}
