#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rev_string - prints a string followed by a new line
 * @s: pointer dereferencing
 * Return: nothing
 */
void rev_string(char *s)
{
	int len, i, j;
	char c;

	for (len = 0; s[len] != '\0'; len++)
		;
	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}

