#include "main.h"
#include <string.h>

/**
 * string_nconcat - concatenates 2 strings
 * @s1: first string
 * @s2: second strings
 * @n: number of bytes in 2nd string to concatenate to `s1`
 *
 * Return: pointer to new concatenated string or NULL on failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j = n;
	char *array;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n >= strlen(s2))
		j = strlen(s2);

	array = malloc(sizeof(char) * (strlen(s1) + j) + 1);

	if (array == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		array[i] = s1[i];
	}

	if (n >= strlen(s2))
	{
		for (i = 0; s2[i] != '\0'; i++)
			array[strlen(array)] = s2[i];
	}
	else
	{
		for (i = 0; i < j; i++)
		{
			array[i + strlen(s1)] = s2[i];
		}
	}

	array[strlen(array)] = '\0';

	return (array);
}
