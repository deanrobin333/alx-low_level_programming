#include <stdio.h>
#include "main.h"

/**
 * is_prime_divisor - checks if number is divisible by a number
 * between 2 and n/2.
 * @n: number to check
 * @i: used to increase the range
 * Return: returns 0, if n is divisible by the range.
 * if no divisible number found then n is prime.
 */

int is_prime_divisor(int n, int i)
{
	if (n < 2)
	{
		return (0);
	}
	if (i > n / 2)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (is_prime_divisor(n, i + 1));
}

/**
 * is_prime_number - function that checks for a prime number
 * @n: number to be checked
 * Return: is_prime_divisor which checks for prime numbers
 */

int is_prime_number(int n)
{

	return (is_prime_divisor(n, 2));
}
