#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: pointer to string to locate character
 * @c: character to locate
 *
 * Return: pointer to character found
 *			NULL if the character is not found
 *
 *
 * We used a loop to find the size of s.
 * so that we use `len` in the 2nd loop instead of `s[i] != '\0'`
 * the loop gives us the number of elements,
 *		hence if elements are 5, the last element is on the 4th index.
 * but we iterate up to the 5th index, so that we include the null character
 *		`c` might be a null character, and if so, we still print it.
 */

char *_strchr(char *s, char c)
{
	int i, len;
	char *found = NULL;

	for (len = 0; s[len] != '\0'; len++)
		;

	for (i = 0; i <= len; i++)
	{
		if (s[i] == c)
		{
			found = &s[i];
			return (found);
		}
	}

	return (NULL);
}
