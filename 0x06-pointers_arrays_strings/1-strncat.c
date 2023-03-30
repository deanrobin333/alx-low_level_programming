#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strncat - concatenating 2 strings,
 * up to the nth character of second string.
 * @dest: First string
 * @src: Source of 2nd string to be added to dest
 * @n: number of characters of src to be added to dest.
 * Return: Concatenating string.
 */

char *_strncat(char *dest, char *src, int n)
{
	char *joined = dest;
	int i;
	int len = strlen(src);

	if (n < len)
	{
		for (i = 0; src[i] < src[n] ; i++)
		{
			dest[strlen(dest)] += src[i];
		}
	}
	else
	{
		for (i = 0; src[i] != '\0'; i++)
		{
			dest[strlen(dest)] += src[i];
		}
	}
	return (joined);
}
