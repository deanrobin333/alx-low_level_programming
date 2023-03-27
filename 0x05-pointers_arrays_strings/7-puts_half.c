#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints last n characters
 * @str: pointer to string
 * Return: always null
 */

void puts_half(char *str)
{
	int i;
	int length;

	for (length = 0; str[length] != '\0'; length++)
	{
		;
	}
	if (length % 2 == 0)
	{
		for (i = (length / 2); str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
	if ((length) % 2 != 0)
	{
		for (i = ((length - 1) / 2); str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
}
