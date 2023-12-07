#include "main.h"

/**
 * _puts - prints a string followed by a new line
 * @str: pointer to string to print
 *
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;
	/**
	 *  "*(str + i)" , is the same as "str[i]"
	 *  so for while, we used the later version
	 *  for _putchar we used the earlier version.
	 */

	while (str[i] != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
