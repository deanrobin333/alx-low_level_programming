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

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
