#include <stdio.h>
#include "main.h"

/**
 * factorial - returns factorial of a given number
 * @n: given number to perform factorial on.
 * if n < 0 return -1 to indicate error
 * if n == 0 factorial is 1
 * Return: factorial value of n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
