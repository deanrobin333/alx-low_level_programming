#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * string_nconcat - caoncatenates two strings
 * @s1: First string
 * @s2: second string
 * @n: number of bytes to add to s1
 * Return: pointer to concatenated string
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, length;
	int j = n;
	char *joined;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	length = strlen(s1) + strlen(s2);
	joined = malloc((length * sizeof(char)) + 1);

	if (joined == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			joined[i] += s1[i];
		}
		if (n >= strlen(s2) + 1)
		{
			for (i = 0; s2[i] != '\0'; i++)
			{
				joined[strlen(joined)] += s2[i];
			}
		}
		else
		{
			for (i = 0; i < j; i++)
			{
				joined[strlen(joined)] += s2[i];
			}

		}
	}
	joined[strlen(joined)] = '\0';
	return (joined);
}
