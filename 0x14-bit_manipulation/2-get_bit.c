#include <stdio.h>
#include "main.h"

/**
 * get_bit - function that returns the value of a bit of a given index
 * @n: number to return bit value
 * @index: index at n, to return bit value
 * Return: value of bit at index, or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int binary_numb;

	if (index > 63)
		return (-1);
	binary_numb = (n >> index) & 1;
	return (binary_numb);
}
