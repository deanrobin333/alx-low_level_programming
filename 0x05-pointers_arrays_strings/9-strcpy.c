#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 *			- including the terminating null byte ('\0')
 * @dest: pointer to array to copy contents to
 * @src: pointer to source of string
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, len = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
