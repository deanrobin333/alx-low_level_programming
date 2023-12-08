#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: pointer to string containing concatenated string
 * @src: pointer to source string
 * @n: number of n bytes to use from src
 *
 * Return: dest; pointer to concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int len_d, len_s, i;

	for (len_d = 0; dest[len_d] != '\0'; len_d++)
		;
	for (len_s = 0; src[len_s] != '\0'; len_s++)
		;
	if (n <= len_s)
	{
		for (i = 0; i < n; i++, len_d++)
		{
			dest[len_d] = src[i];
		}
	}
	else
	{
		for (i = 0; i < len_s; i++, len_d++)
			dest[len_d] = src[i];
	}
	if (n > len_s)
		dest[len_d + len_s] = '\0';
	return (dest);
}
