#include "main.h"
#include <stdio.h>


/**
 * _strstr - function that locates a substring
 * @haystack: string to perform location
 * @needle: substring to be located
 *
 * Return: pointer to beginning of located substring
 *			or NULL if substring is not found
 *
 * `if (haystack[i] == needle[0])`
 * We check for where the first character of `needle` is
 *		located in haystack.
 * Once we find that position, we set that indext to `count`
 *		so that we starting looping `haystack` from there.
 *
 *
 *
 *
 * `if (haystack[count] != needle[j])`
 * We make sure the remaining characters of `haystack`
 *		are the same as all the characters of `needle`.
 * If they are not the same, we `break` out of inner loop, then the
 *		last return statement (NULL), gets executed.
 *
 * We use `count` to loop from the first index of `needle`
 *		found in `haystack`.
 *
 *
 * `if (needle[j] == '\0')`
 * We then check if the last element `j` of `needle
 *		is a null character meaning,
 *		we have reached the end of the `needle` string.
 * if it's the end of the `needle` string we return
 *		a pointer to the beginning of the located substring
 *		in haystack; ie the remaining characters.
 *
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, count = 0;

	/* We check if `needle` is empty, if its we return haystack string */

	if (*needle == '\0')
		return (haystack);


	for (i = 0; haystack[i] != '\0'; i++)
	{
		/**
		 * Check if the current character in haystack matches the
		 *		first character in needle.
		 */
		if (haystack[i] == needle[0])
		{
			count = i;

			for (j = 0; needle[j] != '\0'; j++, count++)
			{
				/* Check if the characters in haystack and needle match */
				if (haystack[count] != needle[j])
					/*  If they don't match, break out of the inner loop */
					break;
			}
			/**
			 * Check if we reached the end of needle
			 * If yes, we found the substring, so return a pointer to
			 *		the beginning of the located substring
			 */
			if (needle[j] == '\0')
				return (&haystack[i]);
		}
	}
	/**
	 * If the function reaches this point,
	 * the substring was not found, so return NULL
	 */

	return (NULL);
}
