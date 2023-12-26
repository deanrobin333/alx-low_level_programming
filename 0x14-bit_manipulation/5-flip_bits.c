#include "main.h"

/**
 * flip_bits - return number of bits needed to get from one # to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits required
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	int i;
	unsigned int len = sizeof(unsigned long int) * 8 - 1;
	unsigned long int present, flippant = 0;

	/**
	 * set the different bits in each to 1 using `^` - XOR
	 *		- if bits are `1` and `0`, it is set to 1.
	 *		- if bits are `1` and `1` or `0` and `0`; nothing is done.
	 */
	flippant = n ^ m;

	for (i = len; i >= 0; i--)
	{
		/* we can then check how many bits were set to 1; giving the count.*/
		present = flippant >> i;
		if (present & 1)
			count++;
	}
	return (count);
}
