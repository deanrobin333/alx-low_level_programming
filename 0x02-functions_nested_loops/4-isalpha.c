#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * _isalpha - checks for upper or lower character
 * @c: integer
 * Return: 1 if lower, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
