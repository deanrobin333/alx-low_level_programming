#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers
 * followed by a new line
 * @separator: string to be printed between numbers
 * @n: the number of integers passed to the function
 * @...:variable number of arguments being printed
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list numb;

	va_start(numb,n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numb,int));
		if(i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(numb);
}
