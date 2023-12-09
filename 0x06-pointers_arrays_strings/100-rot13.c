#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: pointer to string to encode
 *
 * Return: pointer of encoded string
 *
 * break statement is used to exit the inner loop immediately after
 *		the first replacement is done.
 * Without the break statement, if a replacement is made for a character,
 *		the inner loop would continue to iterate through the
 *		remaining characters in the letters array even after a match is found
 *		and a replacement is made;
 *		potentially causing additional unintended replacements
 *		for the same character.
 */

char *rot13(char *str)
{
	int i, j;
	char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rotated[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = rotated[j];
				break;
			}
		}
	}
	return (str);
}
