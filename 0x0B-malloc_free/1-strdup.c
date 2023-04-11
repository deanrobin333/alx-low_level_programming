#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * pointer cointains a copy of the value of *str
 * @str: str containing value to be copied and returned as a pointer
 * Return: pointer to copied string
 */

char *_strdup(char *str)
{
	char *copied;
	int i;

	copied = malloc(sizeof(str));

	if (copied == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			copied[i] = str[i];
		}
	}
	return (copied);
}
