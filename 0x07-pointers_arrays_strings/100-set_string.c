#include <stdio.h>
#include "math.h"

/**
 * set_string - sets value of a pointer to a char
 * @s: double pointer holding address of the pointer.
 * @to: char pointer
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
