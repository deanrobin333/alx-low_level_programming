#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - prints a length of a string.
 * @s: string
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
