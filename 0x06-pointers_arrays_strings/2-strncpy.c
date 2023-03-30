#include <stdio.h>
#include "main.h"
#include <string.h>

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
	char *dest_copy = dest;
	int j;
		for (j = 0; j < n ; j++)
		{
			dest[j] = src[j];
		}
		dest[strlen(src)] = '\0';
	return (dest_copy);
}
