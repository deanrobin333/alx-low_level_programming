#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * _islower - checks for lowercase character
 * @c: integer
 * Return: 1 if lower, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
