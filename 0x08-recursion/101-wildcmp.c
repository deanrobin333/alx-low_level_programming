#include "main.h"

/**
 * wildcmp - compares two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * Return: 1 if the strings are identical
 *			0 if not identical
 */

int wildcmp(char *s1, char *s2)
{
	/* If s1 is empty */
	if (*s1 == '\0')
	{
		/**
		 * If s2 is also empty or starts with '*', it's a match.
		 * Continue checking the rest of s2.
		 */
		if (*s2 != '\0' && *s2 == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		return (*s2 == '\0'); /* If s2 is empty, it's a match. */
	}

	/* If s2 starts with '*' */
		if (*s2 == '*')
		{
			/**
			 * Two possibilities:
			 * 1. '*' represents an empty string, so move to the next character of s1.
			 * 2. Ignore '*' in s2 and move to the next character of s2.
			 */
			return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
		}
	/* If the current characters of s1 and s2 match */
		else if (*s1 == *s2)
		{
			/* Continue checking the next characters. */
			return (wildcmp(s1 + 1, s2 + 1));
		}

	/* If characters don't match, and s2 doesn't have '*' */
	return (0); /* Not a match */
}
