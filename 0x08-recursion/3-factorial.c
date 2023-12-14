#include "main.h"

/**
 * factorial - returns factorial of a given number
 * @n: number to calculate factorial
 *
 * Return: the factorial
 *
 *
 * the factorial of a non-negative integer is the product of all
 *		positive integers less than or equal to that number.
 *
 * factorial of 3 is 3 * 2 * 1.
 * factorial of 5 is 5 * 4 * 3 * 2 * 1
 *
 * so bascally the factorial of `n` is `n` * the factorial of `n` - 1.
 * n! = n * (n -1)!
 *
 * The factorial of 0 is defined to be 1, by convention:
 *		this then can make our base case to stop recursion.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
