#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - function converting binary number to an unsigned int
 * @b: pointer to string containing binary number
 * Return: converted number or 0 if b is NULL or b isnt 0 or 1.
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int decimal_numb = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		decimal_numb = 2 * decimal_numb + (b[i] - '0');
	}
	return (decimal_numb);
}
