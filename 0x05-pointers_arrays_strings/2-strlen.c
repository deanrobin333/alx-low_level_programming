#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to string
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int i, length;

	for (i = 0; s[i] != '\0'; i++)
		length = i + 1;

	return (length);
}
