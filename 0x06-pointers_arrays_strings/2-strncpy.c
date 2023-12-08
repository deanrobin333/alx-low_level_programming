#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: pointer to string containing copied content
 * @src: pointer to source string
 * @n: number of bytes to copy
 *
 * Return: dest - pointer to copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, len_d, len_s = 0;

	for (len_d = 0; dest[len_d] != '\0'; len_d++)
		;
	for (len_s = 0; src[len_s] != '\0'; len_s++)
		;

	if (n < len_s)
	{
		for (i = 0; i < n; i++)
			dest[i] = src[i];
	}
	else
	{
		for (i = 0; i <= len_s - 1; i++)
			dest[i] = src[i];
		for (i = len_s; i < 90; i++)
			dest[i] = '\0';
	}

	return (dest);
}

