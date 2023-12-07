#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse
 * @s: pointer to string to print
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i, length = 0;

	for (i = 0; s[i] != '\0'; i++)
		length++;
	for (i = length; i >= 0; i--)
	{
		if (s[i] != '\0')
			_putchar(s[i]);
	}
	_putchar('\n');
}
