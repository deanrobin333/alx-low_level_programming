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
	if (n >= strlen(s2))
		length = strlen(s1) + strlen(s2);
	else
		length = strlen(s1) + n;
	joined = malloc((length * sizeof(char)) + 1);

	if (joined == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		joined[i] = s1[i];
	}
	if (n >= strlen(s2))
	{
		for (i = 0; s2[i] != '\0'; i++)
		{
			joined[i + strlen(s1)] = s2[i];
		}
	}
	else
	{
		for (i = 0; i < j; i++)
		{
			joined[i + strlen(s1)] = s2[i];
		}

	}
	joined[length] = '\0';
	return (joined);
}
