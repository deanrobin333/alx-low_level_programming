#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: pointer to string
 *
 * Return: pointer to encoded string
 */

char *leet(char *str)
{
	int i, j;
	char numb[] = "4433007711";
	char letters[] = "aAeEoOtTlL";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == letters[j])
				str[i] = numb[j];
		}
	}
	return (str);
}
