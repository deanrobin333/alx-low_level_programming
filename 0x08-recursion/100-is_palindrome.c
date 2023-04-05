#include <stdio.h>
#include "main.h"

int pal_char(char *s, int i, int len);
int _strlen(char *s);

/**
 * _strlen - returns the length of a string
 * @s: string to perform calculation
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * pal_char - checks the characters recursively for palindrome
 * @s: string to check
 * @i: iterator
 * @len: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */

int pal_char(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (pal_char(s, i + 1, len - 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if palindrome, 0 if not
 */


int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (pal_char(s, 0, _strlen(s)));
}




