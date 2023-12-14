#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line.
 * @s: pointer to string to print
 *
 * Return: void
 *
 * We first print the 0th indexed character
 * the reursive call `_puts_recursion(s + 1)` moves the pointer
 *		to the next character in the string, making the next character
 *		the 0th index; we then print it.
 *
 * when we reach the null character, we print a new line, and return to `main`.
 *		this successfully sets our base case.
 * the base case in recursion is what terminates the recursive call.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[0]);
	_puts_recursion(s + 1);
}
