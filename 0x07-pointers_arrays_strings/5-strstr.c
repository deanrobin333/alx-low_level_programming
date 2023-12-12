#include "main.h"
#include <stdio.h>

/**
 * counter - helper function - gets index of 1st instance
 *			of needle in haystack
 * @haystack: pointer to array of string to check
 * @needle: string to find in @haystack
 *
 * Return: location of the first word found
 */

int counter(char *haystack, char *needle)
{
	int count, i, j;

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (needle[i] == haystack[j])
			{
				count = j;
				break;
			}
		}

		if (j == count)
			break;
	}

	return (count);
}

/**
 * _strstr - function that locates a substring
 * @haystack: string to perform location
 * @needle: substring to be located
 *
 * Return: pointer to beginning of located substring
 *			or NULL if substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, len, bytes = 0, count = 0;
	char *found;

	for (len = 0; needle[len] != '\0'; len++)
		;
	if (*needle == '\0')
		return (haystack);

	count = counter(haystack, needle);



	for (i = 0; needle[i] != '\0'; i++)
	{

		for (j = count; haystack[j] != '\0'; j++)
		{
			if (needle[i] == haystack[j])
				bytes++;
		}
	}

	if (bytes == len)
	{
		for (i = count; haystack[i] != '\0'; i++)
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i] == needle[j])
				{
					found = &haystack[i];
					return (found);
				}
				if (needle[j] == '\0')
					return (&haystack[i]);
			}
		}
	}

	return (NULL);
}
