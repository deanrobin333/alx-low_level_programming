#include "main.h"

/**
 * _sqrt_helper - helper function for _sqrt_recursion
 * @n: number to return square root of
 * @i: number to iterate from 0 to check if its square will give us n
 *
 *
 * Return: square root of natural number.
 *			or -1 if square root is not natural number or n is 0.
 */

int _sqrt_helper(int n, int i)
{

	if (i * i > n || n < 0)
		return (-1);
	if (i * i == n)
		return (i);

	return (_sqrt_helper(n, i + 1));
}


/**
 * _sqrt_recursion - return natural square root of a number
 * @n: number to return square root of
 *
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	int i = 1;

	return (_sqrt_helper(n, i));
}
