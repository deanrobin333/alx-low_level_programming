#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to string to search
 * @accept: pointer to string containing characters to search
 *
 * Return: pointer to the byte in `s` that matches one of the bytes in `accept`
 *			or NULL if no byte found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	char *found = NULL;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = &s[i];
				return (found);
			}
		}
	}
	return (NULL);
}

