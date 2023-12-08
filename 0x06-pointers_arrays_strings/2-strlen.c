#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to compute length
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		;
	return (len);
}
