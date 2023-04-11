#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - concatenates 2 strings
 * @s1: First string
 * @s2: second string
 * Return: Concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	char *joined;
	int length;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
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
		for (i = 0; s2[i] != '\0'; i++)
		{
			joined[strlen(joined)] += s2[i];
		}
	}
	joined[strlen(joined)] = '\0';
	return (joined);
}
