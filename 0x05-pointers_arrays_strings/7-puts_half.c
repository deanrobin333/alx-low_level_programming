#include "main.h"

/**
 * puts_half - prints second half of a string
 *			- If the number of characters is odd, the function should print
 *			the last n characters of the string,
 *			where n = (length_of_the_string - 1) / 2
 * @str: string to be printed
 * Return: void
 */

void puts_half(char *str)
{
	int i, len, index;

	for (len = 0; str[len] != '\0'; len++)
		;
	index = len - 1;

	if (len % 2 == 0)
	{
		for (i = (index / 2) + 1; str[i] != '\0'; i++)
			_putchar(str[i]);
	}
	else
	{
		for (i = (index + 2) / 2; str[i] != '\0'; i++)
			_putchar(str[i]);
	}
	_putchar('\n');

}
