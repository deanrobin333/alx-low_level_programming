#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: pointer to string to locate character
 * @c: character to locate
 *
 * Return: pointer to character found
 *			NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int i;
	char *found = NULL;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			found = &s[i];
			break;
		}
	}

	return (found);
}
