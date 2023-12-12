#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to string to get length
 * @accept: string to check if bytes are present in @s
 *
 * Return: pointer to found bytes
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, bytes = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			/**
			 * If a character in `s` matches any character in `accept`,
			 * the `bytes` counter is incremented by 1, and the inner loop is
			 * broken using `break`.
			 */
			if (s[i] == accept[j])
			{
				bytes += 1;
				break;
			}
		}
		/**
		 * The second if statement ensures that the function stops searching if
		 * a character is encountered in `s` that is not present in `accept`
		 */
		if (s[i] != accept[j])
			break;
	}
	return (bytes);
}
