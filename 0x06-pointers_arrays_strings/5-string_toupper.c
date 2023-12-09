#include "main.h"
#include <stdio.h>

/**
 * string_toupper - changes all lowercase of a string to uppercase
 * @str: pointer to string
 *
 * Return: uppercase string
 *
 * difference in ascii between lower case and upper case is 32
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
