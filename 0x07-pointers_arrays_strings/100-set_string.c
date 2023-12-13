#include "main.h"

/**
 * set_string - sets teh value of a pointer to a char
 * @s: double pointer value to use to set
 * @to: pointer to string to change
 *
 * Return: void
 *
 * We have 2 strings
 *		char *s0 = "Bob Dylan";
 *		char *s1 = "Robert Allen";
 * The function is called like so:
 *		set_string(&s1, s0);
 *
 * Since `s1` is a pointer, to pass it to a function, it must be passed
 *		to a double pointer.
 * so `**s` will point to the address of `*s1`, and
 *		we dereference the value of `*s1` from `**s` by `*s`
 *
 * `*to` points to `*s0`.
 * so we change the value of `*s0`, by setting `to` to `*s`
 *
 */

void set_string(char **s, char *to)
{
	*s = to;
}
