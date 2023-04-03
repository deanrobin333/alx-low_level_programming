#include <stdio.h>
#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @n: number of bytes to bytes to be copied.
 * @src: source containing bytes to be copied.
 * @dest: where bytes are to be copied
 * Return: new value of dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int j;

	j = n;

	for (i = 0; i < j; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
