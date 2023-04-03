#include <stdio.h>
#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: string containing characters
 * @c: character to be located
 * Return: returns a pointer to the first occurence of c
 */

char *_strchr(char *s, char c)
{
	int i;
	char *found_chr;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			found_chr = &s[i];
			break;
		}
		else
		{
		}
	}
	return (found_chr);
}
