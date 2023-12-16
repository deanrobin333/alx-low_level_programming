#include "main.h"

/**
 * _strdup - returns pointer to a newly allocated space
 *			which contains a copy of the string `str`
 * @str: pointer to string to copy
 *
 * Return: pointer to copied string
 */

char *_strdup(char *str)
{
	int i, len;
	char *array;

	if (*str == '\0')
		return (NULL);

	for (len = 0; str[len] != '\0'; len++)
		;
	array = (char *)malloc(len);

	if (array == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		array[i] = str[i];
	}

	array[len] = '\0';

	return (array);
}
