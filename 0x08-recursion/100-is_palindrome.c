#include "main.h"

int str_length(char *s);
int pal_char(char *s, int i, int len);

/**
 * is_palindrome - checks if string is palindrome
 * @s: string to check
 *
 * Return: 1 if palindrome, 0 if not
 *
 * the work happens in `pal_char`
 */

int is_palindrome(char *s)
{
	int len = 0;

	if (*s == '\0')
		return (1);

	len = str_length(s);
	/**
	 * we could have as well removed the `len` variable and put
	 *		everything in the `return` like so:
	 * return (pal_char(s, 0, _strlen(s)));
	 *
	 * but in our function, we are passing `len - 1` to get the last index.
	 */

	return (pal_char(s, 0, len - 1));
}


/**
 * str_length - calculates the length of a string
 * @s: string to check
 * Return: the length
 */

int str_length(char *s)
{
	int len = 0;

	if (*s != '\0')
		len = 1 + str_length(s + 1);
	return (len);
}

/**
 * pal_char - compares each character in the string.
 * The first character with the last character
 * until we reach the middle `i >= len`
 *
 * @str: string to check
 * @i: index 0
 * @len: last index.
 *
 * Return: 1 if palindrome, zero if not
 *
 * if at any point the first half, and last half dont match,
 *		recursion stops and 0 is returned.
 * if recursion goes on until `i` is greater then `len`
 *		it means the first and last are same, so we can return 1.
 */

int pal_char(char *str, int i, int len)
{
	if (str[i] != str[len])
		return (0);
	if (i >= len)
		return (1);
	return (pal_char(str, i + 1, len - 1));
}
