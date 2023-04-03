#include <stdio.h>
#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: memory address to be filled.
 * @b: constant byte to be used to fill
 * @n: number of bytes to fill.
 *
 * Return: return to s, the new filled value.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;
	int j;

	j = n;

	for (i = 0; i < j; i++)
	{
		s[i] = b;
	}
	return (s);
}
