#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to string
 *
 * Return: length of string
 *
 * since each recursive call creates a new instance of a function,
 *		every time the recursive call is called len = 0.
 * so if we use `len++`, len will be increased by 1, once.
 * so if we want to increase len for each recursive call, we must set `len` to
 *		`1 + recursive call`, so that when the recursive call reaches the end,
 *		and it begins to return, for every character it returns, it adds 1 to len.
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		len = 1 + _strlen_recursion(s + 1);
	}

	return (len);
}
