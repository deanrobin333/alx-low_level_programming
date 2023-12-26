#include "main.h"

/**
 * clear_bit - sets the value of a bit to 1 at a given index
 * @n: number to set
 * @index: position of bit to set
 *
 * Return: 1 on success or -1 on error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);

	/**
	 * `~` - we move `1` to indexth bit, then we flip it so that it is 0.
	 * `&` - then AND with n. will always be `0`, so indexth bit of n wil be 0.
	 */
	*n = (~(1UL << index) & *n);

	return (1);
}
