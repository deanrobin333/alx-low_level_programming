#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strcpy - copies one string to another
 * @dest: containing copied string
 * @src: string to be copied.
 * Return: a character value
 */

char *_strcpy(char *dest, char *src)
{
	char *destCopy = dest;
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[strlen(src)] = '\0';
	return (destCopy);
}
