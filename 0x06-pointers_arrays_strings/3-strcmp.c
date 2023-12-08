#include "main.h"

/**
 * _strcmp - compares 2 strings
 * @s1: first string
 * @s2: second string
 *
 * Return: difference of first differing character
 *
 *		The function iterates through the strings character by character.
 *		If, at any point, it finds a pair of characters that are not equal,
 *		it stops the iteration and returns the difference between
 *		the ASCII values of those characters
 *
 *		if The first differing characters are 'H' and 'W',
 *		The ASCII value of 'H' is 72, and the ASCII value of 'W' is 87.
 *		So, 72 - 87 gives -15, and that's the result returned by _strcmp.
 *
 *		if there are no differing characters by the time iteration is done
 *		it retuns 0
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	
	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
