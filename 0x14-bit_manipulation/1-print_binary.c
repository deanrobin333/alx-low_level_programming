#include "main.h"
#include <limits.h>
/**
 * print_binary - prints binary representation of a number
 * @n: number to print
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int present;
	/* must set i to int, as if it unsigned, it cant be less than 0*/
	int count = 0, i, m;

	m = sizeof(unsigned long int) * 8 - 1;

	if (n == 0)
		_putchar('0');
	for (i = m; i >= 0; i--)
	{
		present = n >> i;
		if (present & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count != 0)
		{
			/**
			 * we keep skiping leading 0.
			 * if 1 is printed count is no longer 0, hence print leading 0s.
			 */
			_putchar('0');
		}
		/**
		 * if no `1` bit is met, it means the last bit is `0`
		 * so we make sure we handle this scenario
		 */
	}
}

