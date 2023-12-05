#include <stdio.h>
#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: variable holding the integer to compute
 * Return: 0
 */

int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n == 0)
		return (n);
	else
		return (n * -1);
}
