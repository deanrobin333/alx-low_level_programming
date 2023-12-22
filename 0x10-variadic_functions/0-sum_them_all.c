#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of parameters
 * @...: arguments passed
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list values;

	/*check if n is not > 0 */
	/* ideally n is an unsigned int, so it cant be negative, but we'll us <= */
	if (n <= 0)
		return (0);

	va_start(values, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(values, int);
	}
	va_end(values);

	return (sum);
}
