#include "main.h"
#include <string.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of `0` and `1`.
 *
 * Return: converted number or
 *			- 0 if b is NULL, or string isnt `0` or `1`
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i, k, power_2, len;

	if (b == NULL)
		return (0);

	len = strlen(b) - 1;

	for (i = len, k = 0; i >= 0; i--, k++)
	{
		if (b[k] < '0' || b[k] > '1')
			return (0);
		if (i == 0)
			power_2 = 1;
		else
			power_2 = 1 << i;
		result += power_2 * (b[k] - '0');
	}

	return (result);
}
