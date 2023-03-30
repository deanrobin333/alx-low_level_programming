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
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		;
	}
	for (j = 0; j < n && (src[j] != '\0') ; j++)
	{
		dest[i] = src[j];
	}

	dest[strlen(dest)] = '\0';
	return (dest);
}
