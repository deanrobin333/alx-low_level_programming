#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - function returns the value of x raised to the power of y
 * @x: value to be used
 * @y: power to be used
 * if power is 0 ie y == 0 return -1
 * Return: value of x raised to the power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
