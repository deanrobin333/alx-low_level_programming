#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints binary representation of a number
 * @n: number to print
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	/**
	 * This line initializes max_int with the most significant bit (MSB)
	 *		set to 1 and all other bits set to 0.
	 * The expression `1UL << (sizeof(unsigned long int) * 8 - 1)` uses
	 *		bit-shifting to set the MSB of an unsigned long int.
	 * UL - sets it to an unsigned long.
	 * same to what we would for int type - `max_int = 1 << 31`.
	 */
	 unsigned long int max_int = 1UL << (sizeof(unsigned long int) * 8 - 1);
	 int start_printing = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (; max_int > 0; max_int >>= 1)
	{
		/**
		 * checks if the set bit in the current position (being checked)
		 *		of `max_int` is also set in the number n.
		 * If it is, then we know that the binary representation of n has a 1
		 *		in that position, and we proceed to print 1.
		 *		If it isn't, then we print 0.
		 */
		if (n & max_int)
		{
			start_printing = 1;
			_putchar('1');
		}
		/**
		 * the start_printing flag and the max_int == 1 condition work together
		 *		to ensure that the binary representation of n is
		 *		printed correctly without any leading zeros and
		 *		with all the necessary bits.
		 */
		else if (start_printing || max_int == 1)
			_putchar('0');
	}
}

