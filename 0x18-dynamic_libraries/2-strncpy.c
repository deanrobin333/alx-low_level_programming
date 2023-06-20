#include <stdio.h>
#include "main.h"

/**
 * _strncpy - copies 2 strings,
 * up to the nth character of second string.
 * @dest: First string
 * @src: Source of 2nd string to be added to dest
 * @n: number of characters of src to be copied to dest.
 * Return: Concatenating string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);

}
