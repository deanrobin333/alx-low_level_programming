#include <stdio.h>
#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: variable containing character
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _islower(int c)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == c)
			return (1);
	}
	return (0);
}
