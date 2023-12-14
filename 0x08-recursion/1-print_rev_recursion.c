#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: pointer to string to print
 *
 * Return: void
 *
 * Position of recursive call matters.
 * before we pring using _putchar, the recursive call is done
 *		until it hits the null character in the string.
 *		when it hits, it starts to return.
 *
 * Recursive function uses a stack that operates in last in first out.
 * When the recursive call hits the '\0' character, it returns the
 *		characters to _putchar, starting from the last one (LIFO), to the first.
 * Hence priting in reverse.
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	_print_rev_recursion(s + 1);
	_putchar(s[0]);
}
