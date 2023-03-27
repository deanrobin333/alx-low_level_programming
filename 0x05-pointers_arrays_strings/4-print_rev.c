#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints a string followed by a new line
 * @s: pointer dereferencing
 * Return: nothing
 */

void print_rev(char *s)
{
	int length = 0;
	int i;

	while (s[length] != '\0')
	{
		length++;
	}
	for (i = length; i >= 0 ; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');

}
