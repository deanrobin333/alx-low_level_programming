#include <stdio.h>
#include "main.h"

/**
 * set_bit - sets the value of a bit at 1 at a given index
 * @n: pointer to number to manipulate bit value
 * @index: position in number to set bit to 1
 * Return: 1 on success or -1 if error occurs
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
