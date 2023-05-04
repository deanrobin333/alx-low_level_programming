#include <stdio.h>
#include "main.h"

/**
 * flip_bits - gets number of bits required to flip from one number to another
 * @n: first number
 * @m: other number
 * Return: Number of bits required
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 63;
	int count = 0;
	unsigned long int present;
	unsigned long int flippant = n ^ m;

	while (i >= 0)
	{
		present = flippant >> i;
		if (present & 1)
			count++;
		i--;
	}
	return (count);
}
