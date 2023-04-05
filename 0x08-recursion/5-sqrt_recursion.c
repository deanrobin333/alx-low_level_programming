#include <stdio.h>
#include "main.h"

/**
 * _sqrt_numb - gives us i which is the square root
 * @n: number to perform square root
 * @i: Square of i, gives us n
 * Return: sqrt numb
 */

int _sqrt_numb(int n, int i)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_numb(n, i + 1));
	}
}


/**
 * _sqrt_recursion - returns the natural square root of a number
 * if square root of n is not a natural number return -1
 * @n: number to perform square root
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_numb(n, 1));
}
