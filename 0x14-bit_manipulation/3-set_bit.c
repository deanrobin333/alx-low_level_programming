#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: number to set
 * @index: position of bit to set
 *
 * Return: 1 on success or -1 on error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	/**
	 * move `1` to the index'th bit, then `OR` with n
	 * 1UL - to ensure 1 is an unsigned long int, and not int.
	 */

	*n = (1UL << index) | *n;

	return (1);
}
