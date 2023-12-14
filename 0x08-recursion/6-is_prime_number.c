#include "main.h"

int is_prime_helper(int n, int i);

/**
 * is_prime_number - checks for prime number
 * @n: number to check
 *
 * Return: 1 if prime
 *			0 if not prime
 *
 * A prime number is a natural number greater than 1 that is not
 *		a product of two smaller natural numbers.
 * In other words, a prime number has only two distinct positive divisors:
 *		1 and itself.
 */

int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));
}

/**
 * is_prime_helper - helper function to check for prime number
 * @n: number to check
 * @i: iterating value
 *
 * Return: 1 if prime, 0 if not
 */

int is_prime_helper(int n, int i)
{
	/* initially i = 2 */
	if (n < 2)
		return (0);
	 /**
	  * if n is divisible by the current value of i,
	  * then it's obviously not a prime number
	  *
	  * `i` will only iterate until half of n (as on next if)
	  */
	if (n % i == 0)
		return (0);
	/**
	 * if i is greater than half of n
	 *		and not divisibile by 2
	 *		and not fully divisible by n
	 * then `n` has to be a prime number.
	 *
	 * We are using half of `n`, instead of iterating through all the
	 *		values until n.
	 *
	 * recurssion will occur until i is half of n
	 * this is the base case
	 */

	if (i > n / 2)
		return (1);

	return (is_prime_helper(n, i + 1));

}
