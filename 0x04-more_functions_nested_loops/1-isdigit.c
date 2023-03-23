#include <stdio.h>
#include "main.h"
/**
 * _isdigit - checks for digits
 * @c: contains the digit value
 * Return: 1 if true and 0 if not.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
