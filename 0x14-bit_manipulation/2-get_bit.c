#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to assess
 * @index: index of bit to return, starting from 0
 *
 * Return: value of the bit at index or -1 if an error occurs.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int present;

	if (n == 0)
		return (0);

	present = n >> index;

	if (present & 1)
		return (1);
	else
		return (0);

	return (-1);
}
