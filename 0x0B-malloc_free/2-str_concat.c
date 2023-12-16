#include "main.h"
#include <string.h>

/**
 * str_concat - concatenates 2 strings
 * @s1: pointer to 1st string
 * @s2: pointer to 2nd string
 *
 * Return: pointer to concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int len_s1, len_s2, i, j, k;
	char *array;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	else if (s1 == NULL && s2 != NULL)
		return (s2);
	else if (s2 == NULL && s1 != NULL)
		return (s1);

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);

	array = (char *)malloc(len_s1 + len_s2);

	if (array == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		array[i] = s1[i];
	}

	for (k = 0, j = i; s2[k] != '\0'; k++, j++)
		array[j] = s2[k];

	array[strlen(array)] = '\0';

	return (array);
}
