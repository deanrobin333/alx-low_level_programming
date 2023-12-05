#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: variable holding the number
 * Return: last digit
 */

int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		n = n * -1;
	last_digit = n % 10;
	/**
	 * typically INT_MIN is equal to (-2147483647 - 1), why?
	 *		which is the most negative value that a 32-bit signed integer can
	 *		represent.
	 * INT_MIN is typically defined as the negation of INT_MAX + 1.
	 * INT_MAX: The maximum representable value for a 32-bit signed integer.
	 * INT_MAX + 1: The value that overflows to the most negative value.
	 * -(INT_MAX + 1): Negating the overflow results in the most
	 *		negative value (INT_MIN).
	 *  hence the range of values that can be represented by a 32-bit signed
	 *		integer is from -2147483648 to 2147483647.
	 * if we have INT_MIN passed to n, the first thing our program does is
	 *		to make the negative number positive.
	 *	Now since we can not have a number higher than 2147483647,
	 *		we can not have 2147483648.
	 * so INT_MIN will not be multiplied by -1, making n remain negative.
	 * so after getting the last digit, we must again check if
	 *		it is less than 0, and then make it positive.
	 */
	if (last_digit < 0)
		last_digit = last_digit * -1;
	_putchar(last_digit + '0');

	return (last_digit);
}
