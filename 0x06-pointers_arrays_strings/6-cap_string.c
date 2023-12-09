#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: pointer to string
 *
 * Separators of words: space, tabulation, new line,
 *			 `,`, `;`, `.`, `!`, `?`, `"`, `(`, `)`, `{`, and `}`
 *
 * Return: pointer to captilized string
 *
 *
 * what the if statement would be, if we did not use an array
 *
 * if (str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' ||
 *		str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '\"' ||
 *		str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' ||
 *		str[i - 1] == '}' || str[i - 1] == ' ' || str[i - 1] == '\n')
 */

char *cap_string(char *str)
{
	int i, j;
	char sep[] = ",;.!?\"(){} \n";

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == '\t')
			str[i] = ' ';

		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0)
				str[0] = str[0] - 32;
			for (j = 0; sep[j] != '\0'; j++)
			{
				if (str[i - 1] == sep[j])
					str[i] = str[i] - 32;
			}

		}
	}
	return (str);
}
