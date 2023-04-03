#include <stdio.h>
#include "main.h"

/**
 * _strstr - locates a substring
 * @needle: substring used for searching
 * @haystack: string to search
 * Return: Returns a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int k;

	if (*needle == '\0')
	{
		return (haystack);
	}

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			k = i;
			for (j = 0; needle[j] != '\0'; j++, k++)
			{
				if (haystack[k] != needle[j])
				{
					break;
				}
			}
			if (needle[j] == '\0')
			{
				return (&haystack[i]);
			}
		}
	}

	return (NULL);
}
