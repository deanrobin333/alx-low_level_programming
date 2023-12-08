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

		for (i = 0; i < n && src[i] != '\0'; i++)
			dest[i] = src[i];
		/**
		 * i stops iterating when it encounters a null character in src
		 * We use current value of i, to fill remaining n bytes with null
		 */
		for (; i < n; i++)
			dest[i] = '\0';

	return (dest);
}

