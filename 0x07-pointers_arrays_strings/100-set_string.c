#include "main.h"

/**
 * set_string - sets teh value of a pointer to a char
 * @s: double pointer value to use to set
 * @to: pointer to string to change
 *
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
