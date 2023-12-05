#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - print the alphabet in lowercase
 * Return: 0
 */

void print_alphabet(void)
{
	int c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
