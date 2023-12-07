#include "main.h"

/**
 * print_number - prints an integer
 * @n: Integer to print
 *
 * You can only use _putchar function to print
 * You are not allowed to use long
 * You are not allowed to use arrays or pointers
 * You are not allowed to hard-code special values
 *
 * Return: void
 */

void print_number(int n)
{
	unsigned int numb;

	if (n < 0)
	{
		_putchar('-');
		numb = n * -1;
	}
	else
		numb = n;
	if (numb / 10 != 0)
	{
		/* perform recursion until it gets to 0 */
		print_number(numb / 10);
	}
	/* we print from the last going to the first one by one */
	_putchar((numb % 10) + '0');
}
