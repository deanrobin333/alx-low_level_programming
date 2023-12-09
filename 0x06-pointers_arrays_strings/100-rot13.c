#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: pointer to string to encode
 *
 * Return: pointer of encoded string
 */

char *rot13(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i] >= 'a' && str[i] <= 'm')
				str[i] = str[i] + 13;
			else if (str[i] >= 'n' && str[i] <= 'z')
				str[i] = str[i] - 13;
		}
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (str[i] >= 'A' && str[i] <= 'M')
				str[i] = str[i] + 13;
			else if (str[i] >= 'N' && str[i] <= 'Z')
				str[i] = str[i] - 13;
		}
	}
	return (str);
}
