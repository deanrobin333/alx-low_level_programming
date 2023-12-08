#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: String to concatenate to
 * @src: source containing string to copy
 *
 * Return: dest, which is the memory address of concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int d, s, len_d, len_s;

	for (len_d = 0; dest[len_d] != '\0'; len_d++)
		;
	for (len_s = 0; src[len_s] != '\0'; len_s++)
		;

	for (s = 0, d = len_d; src[s] != '\0'; s++, d++)
	{
		dest[d] = src[s];
	}

	dest[len_d + len_s] = '\0';

	return (dest);
}


