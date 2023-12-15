#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings
 * dest and src
 * @dest: pointer to string to be concatenated
 * @src: pointer to source string
 * Return: Pointer to concantenated string
 */

char *_strcat(char *dest, char *src)
{
	char *joined = dest;
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[strlen(dest)] += src[i];
	}
	dest[strlen(dest)] = '\0';
	return (joined);
}
