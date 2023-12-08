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
	int i;

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
