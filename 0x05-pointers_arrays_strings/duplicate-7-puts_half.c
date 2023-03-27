#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints last n characters
 * @str: pointer to string
 * Return: always null
 */

int main(void)
{
	int i;
	int length;
	char str[1000] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum."; 

	for (length = 0; str[length] != '\0'; length++)
	{
		;
	}
	printf("%d", length);
	if (length % 2 == 0)
	{
		for (i = (length / 2); i < length; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
	if (length % 2 != 0)
	{
		for (i = ((length + 1) / 2); i < length; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
}
