#include <stdio.h>
#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to get length from.
 * @accept: point in the string s where bytes are counted from.
 * Return: a value, the length.
 */

unsigned int _strspn(char *s, char *accept)
{
	int length = 0;
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				length ++;
				break;
			}
		}
		if (s[i] != accept[j])
		{
			break;
		}
	}
	return (length);
}
