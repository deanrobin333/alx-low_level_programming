#include "main.h"
#include <string.h>

/**
 * str_concat - concatenates 2 strings
 * @s1: pointer to 1st string
 * @s2: pointer to 2nd string
 *
 * Return: pointer to concatenated string
 *
 * if a string is empty ie `""`, `strlen()` returns 0.
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int len_s1, len_s2, i, k;
	char *array;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL && s1 != NULL)
		s2 = "";

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);

	array = (char *)malloc(len_s1 + len_s2 + 1);

	if (array == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		array[i] = s1[i];

	/* using strlen, so that it gets the right length */

	for (k = 0; s2[k] != '\0'; k++)
		array[strlen(array)] = s2[k];

	array[strlen(array)] = '\0';

	return (array);
}
