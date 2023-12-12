#include "main.h"
#include <stdio.h>


/**
 * _strstr - function that locates a substring
 * @haystack: string to perform location
 * @needle: substring to be located
 *
 * Return: pointer to beginning of located substring
 *			or NULL if substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, count = 0;

	if (*needle == '\0')
		return (haystack);


	for (i = 0; haystack[i] != '\0'; i++)
	{
		/**
		 * We check for where the first character of `needle` is
		 *		located in haystack.
		 * Once we find that position, we set that indext to `count`
		 *		so that we starting looping haystack from there.
		 */
		if (haystack[i] == needle[0])
		{
			count = i;

			for (j = 0; needle[j] != '\0'; j++, count++)
			{
				/**
				 * We make sure the remaining characters of `haystack`
				 *		are the same as all the characters of `needle`.
				 * If they are not the same, we return `NULL`.
				 */
				if (haystack[count] != needle[j])
					return (NULL);
				else
					return (&haystack[count]);
			}
		}
	}

	return (NULL);
}
